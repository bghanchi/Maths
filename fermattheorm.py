import time
start_time = time.time()
p,l=map(int,input().split())
count=0
if p>100:
    if l<=p-1:
        for k in range(1,l+1):
            f=0
            z1=[pow(z,k)%p for z in range(1,100)]
            for x in range(1,2):
                for y in range(1,11):
                        x1=pow(x,k)%p  
                        y1=pow(y,k)%p
                        if (x1+y1) in z1:
                            count=count+1
                            f=f+1
                            break
                if f!=0:
                    break
    else:
        t=l%(p-1)
        for k in range(1,p):
            f=0
            z1=[pow(z,k)%p for z in range(1,100)]
            for x in range(1,2):
                for y in range(1,11):
                        x1=pow(x,k)%p  
                        y1=pow(y,k)%p
                        if (x1+y1) in z1:
                            count=count+1
                            f=f+1
                            break
                if f!=0:
                    break
        count=count*int((l/(p-1)))

        for k in range(1,t+1):
            f=0
            z1=[pow(z,k)%p for z in range(1,100)]
            for x in range(1,2):
                for y in range(1,11):
                        x1=pow(x,k)%p  
                        y1=pow(y,k)%p
                        if (x1+y1) in z1:
                            count=count+1
                            f=f+1
                            break
                if f!=0:
                    break
else:        
        if l<=p-1:
            for k in range(1,l+1):
                f=0
                z1=[pow(z,k)%p for z in range(1,p)]
                for x in range(1,p):
                    for y in range(1,p):
                            x1=pow(x,k)%p  
                            y1=pow(y,k)%p
                            if (x1+y1) in z1:
                                count=count+1
                                f=f+1
                                break
                    if f!=0:
                        break
        else:
            t=l%(p-1)
            for k in range(1,p):
                f=0
                z1=[pow(z,k)%p for z in range(1,p)]
                for x in range(1,p):
                    for y in range(1,p):
                            x1=pow(x,k)%p  
                            y1=pow(y,k)%p
                            if (x1+y1) in z1:
                                count=count+1
                                f=f+1
                                break
                    if f!=0:
                        break
            count=count*int((l/(p-1)))

            for k in range(1,t+1):
                f=0
                z1=[pow(z,k)%p for z in range(1,p)]
                for x in range(1,p):
                    for y in range(1,p):
                            x1=pow(x,k)%p  
                            y1=pow(y,k)%p
                            if (x1+y1) in z1:
                                count=count+1
                                f=f+1
                                break
                    if f!=0:
                        break

    
    
print(count)                    
print("My program took", time.time() - start_time, "to run")
