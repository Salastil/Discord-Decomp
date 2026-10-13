package dp;

import java.lang.reflect.Constructor;
import java.lang.reflect.Type;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SpreadBuilder;

/* loaded from: classes3.dex */
public final class h extends w implements f {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f7658e;

    /* renamed from: f, reason: collision with root package name */
    public final Object f7659f;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public h(Constructor constructor, Object obj, int i5) {
        super(constructor, r6, null, (Type[]) (r0.length <= 2 ? new Type[0] : kotlin.collections.u.j(r0, 1, r0.length - 1)));
        this.f7658e = i5;
        switch (i5) {
            case 1:
                Intrinsics.checkNotNullParameter(constructor, "constructor");
                Class declaringClass = constructor.getDeclaringClass();
                Intrinsics.checkNotNullExpressionValue(declaringClass, "getDeclaringClass(...)");
                Type[] genericParameterTypes = constructor.getGenericParameterTypes();
                Intrinsics.checkNotNullExpressionValue(genericParameterTypes, "getGenericParameterTypes(...)");
                super(constructor, declaringClass, null, genericParameterTypes);
                this.f7659f = obj;
                break;
            default:
                Intrinsics.checkNotNullParameter(constructor, "constructor");
                Class declaringClass2 = constructor.getDeclaringClass();
                Intrinsics.checkNotNullExpressionValue(declaringClass2, "getDeclaringClass(...)");
                Type[] genericParameterTypes2 = constructor.getGenericParameterTypes();
                Intrinsics.checkNotNullExpressionValue(genericParameterTypes2, "getGenericParameterTypes(...)");
                this.f7659f = obj;
                break;
        }
    }

    @Override // dp.g
    public final Object call(Object[] args) {
        switch (this.f7658e) {
            case 0:
                Intrinsics.checkNotNullParameter(args, "args");
                m3.n.t(this, args);
                Constructor constructor = (Constructor) this.a;
                SpreadBuilder spreadBuilder = new SpreadBuilder(3);
                spreadBuilder.add(this.f7659f);
                spreadBuilder.addSpread(args);
                spreadBuilder.add(null);
                return constructor.newInstance(spreadBuilder.toArray(new Object[spreadBuilder.size()]));
            default:
                Intrinsics.checkNotNullParameter(args, "args");
                m3.n.t(this, args);
                Constructor constructor2 = (Constructor) this.a;
                SpreadBuilder spreadBuilder2 = new SpreadBuilder(2);
                spreadBuilder2.add(this.f7659f);
                spreadBuilder2.addSpread(args);
                return constructor2.newInstance(spreadBuilder2.toArray(new Object[spreadBuilder2.size()]));
        }
    }
}
