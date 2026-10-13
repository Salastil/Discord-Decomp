package dp;

import java.lang.reflect.Method;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Collection;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SpreadBuilder;

/* loaded from: classes3.dex */
public final class u extends q implements f {

    /* renamed from: g, reason: collision with root package name */
    public final Object[] f7670g;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public u(Method method, Object[] boundReceiverComponents) {
        super(method, false, (Type[]) r0.toArray(new Type[0]));
        Collection collection;
        Intrinsics.checkNotNullParameter(method, "method");
        Intrinsics.checkNotNullParameter(boundReceiverComponents, "boundReceiverComponents");
        Type[] genericParameterTypes = method.getGenericParameterTypes();
        Intrinsics.checkNotNullExpressionValue(genericParameterTypes, "getGenericParameterTypes(...)");
        int length = boundReceiverComponents.length;
        Intrinsics.checkNotNullParameter(genericParameterTypes, "<this>");
        if (length < 0) {
            throw new IllegalArgumentException(s4.h.e(length, "Requested element count ", " is less than zero.").toString());
        }
        int length2 = genericParameterTypes.length - length;
        length2 = length2 < 0 ? 0 : length2;
        Intrinsics.checkNotNullParameter(genericParameterTypes, "<this>");
        if (length2 < 0) {
            throw new IllegalArgumentException(s4.h.e(length2, "Requested element count ", " is less than zero.").toString());
        }
        if (length2 == 0) {
            collection = m0.f13512d;
        } else {
            int length3 = genericParameterTypes.length;
            if (length2 >= length3) {
                collection = kotlin.collections.x.H(genericParameterTypes);
            } else if (length2 == 1) {
                collection = kotlin.collections.b0.c(genericParameterTypes[length3 - 1]);
            } else {
                ArrayList arrayList = new ArrayList(length2);
                for (int i5 = length3 - length2; i5 < length3; i5++) {
                    arrayList.add(genericParameterTypes[i5]);
                }
                collection = arrayList;
            }
        }
        this.f7670g = boundReceiverComponents;
    }

    @Override // dp.q, dp.g
    public final Object call(Object[] args) {
        Intrinsics.checkNotNullParameter(args, "args");
        m3.n.t(this, args);
        SpreadBuilder spreadBuilder = new SpreadBuilder(2);
        spreadBuilder.addSpread(this.f7670g);
        spreadBuilder.addSpread(args);
        return f(null, spreadBuilder.toArray(new Object[spreadBuilder.size()]));
    }
}
