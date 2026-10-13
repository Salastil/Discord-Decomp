package ys;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class i implements InvocationHandler {
    public final ArrayList a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f21103b;

    /* renamed from: c, reason: collision with root package name */
    public String f21104c;

    public i(ArrayList protocols) {
        Intrinsics.checkNotNullParameter(protocols, "protocols");
        this.a = protocols;
    }

    @Override // java.lang.reflect.InvocationHandler
    public final Object invoke(Object proxy, Method method, Object[] objArr) {
        Intrinsics.checkNotNullParameter(proxy, "proxy");
        Intrinsics.checkNotNullParameter(method, "method");
        if (objArr == null) {
            objArr = new Object[0];
        }
        String name = method.getName();
        Class<?> returnType = method.getReturnType();
        if (Intrinsics.areEqual(name, "supports") && Intrinsics.areEqual(Boolean.TYPE, returnType)) {
            return Boolean.TRUE;
        }
        if (Intrinsics.areEqual(name, "unsupported") && Intrinsics.areEqual(Void.TYPE, returnType)) {
            this.f21103b = true;
            return null;
        }
        boolean areEqual = Intrinsics.areEqual(name, "protocols");
        ArrayList arrayList = this.a;
        if (areEqual && objArr.length == 0) {
            return arrayList;
        }
        if ((Intrinsics.areEqual(name, "selectProtocol") || Intrinsics.areEqual(name, "select")) && Intrinsics.areEqual(String.class, returnType) && objArr.length == 1) {
            Object obj = objArr[0];
            if (obj instanceof List) {
                List list = (List) obj;
                int size = list.size();
                if (size >= 0) {
                    int i5 = 0;
                    while (true) {
                        int i6 = i5 + 1;
                        Object obj2 = list.get(i5);
                        if (obj2 == null) {
                            throw new NullPointerException("null cannot be cast to non-null type kotlin.String");
                        }
                        String str = (String) obj2;
                        if (arrayList.contains(str)) {
                            this.f21104c = str;
                            return str;
                        }
                        if (i5 == size) {
                            break;
                        }
                        i5 = i6;
                    }
                }
                String str2 = (String) arrayList.get(0);
                this.f21104c = str2;
                return str2;
            }
        }
        if ((!Intrinsics.areEqual(name, "protocolSelected") && !Intrinsics.areEqual(name, "selected")) || objArr.length != 1) {
            return method.invoke(this, Arrays.copyOf(objArr, objArr.length));
        }
        Object obj3 = objArr[0];
        if (obj3 == null) {
            throw new NullPointerException("null cannot be cast to non-null type kotlin.String");
        }
        this.f21104c = (String) obj3;
        return null;
    }
}
