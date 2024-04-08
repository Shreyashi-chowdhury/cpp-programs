# # def bsq(x):
# #     a = x*x
# #     return a
# # def ssq(x,a):
# #     b = a-(x+x)
# #     y = b*b
# #     return y
# # a = bsq(5)
# # b = ssq(1,5)
# # c = lambda a,b: a-b
# # print("Bigger Square area: ",a)
# # print("Smaller Square area: ",b)
# # print("Difference of area: ",c(a,b))

# c = 10
# x = int(input())

# try:
#     print(c/x)
# except ZeroDivisionError:
#     print("Cant divide by Zero")
#     x= int(input("Enter new data: "))
#     t = True
#     while(t):
#         print("Cant divide by Zero")
#         x= int(input("Enter new data: "))
#         if x>0:
#             t = False
#     print(c/x)



# l1 = [2,4,3]
# l2 = [5,6,4]
# l3 = []
# c = 0
# temp = ''
# l4 =[]
# for i in range(len(l1)):
#     sum = l1[i] + l2[i] + c
#     if sum > 9:
#         c=1
#         temp = str(sum)[1]
#     else:
#         c=0
#         temp = str(sum)

#     l3.append(int(temp))

# l4 = l3[::-1]

# print(l4)


#median of two sorted arrays

# l1 = [1,2]
# l2 = [3,4]

# l3 = l1+l2
# l = len(l3)

# if(l % 2 != 0):
#     val = l3[l/2]
# else:
#     la = l // 2 
#     f = la - 1
#     val = (l3[la]+l3[f])/2

# print("{:.5f}".format(val))


# arr = map(int,input().split())
# l = []
# for i in arr:
#     print(i,end=" ")
#     l.append(i)
# s = set(l)

# print(s)

# def round2(x):
#     s = str(x)


print(8.27 % 10)