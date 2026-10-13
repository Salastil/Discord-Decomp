package dp;

import java.lang.reflect.Constructor;
import java.lang.reflect.Member;
import java.lang.reflect.Type;
import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SpreadBuilder;

/* loaded from: classes3.dex */
public final class i extends w {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f7660e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ i(Member member, Type type, Class cls, Type[] typeArr, int i5) {
        super(member, type, cls, typeArr);
        this.f7660e = i5;
    }

    @Override // dp.g
    public final Object call(Object[] args) {
        switch (this.f7660e) {
            case 0:
                Intrinsics.checkNotNullParameter(args, "args");
                m3.n.t(this, args);
                Constructor constructor = (Constructor) this.a;
                SpreadBuilder spreadBuilder = new SpreadBuilder(2);
                spreadBuilder.addSpread(args);
                spreadBuilder.add(null);
                return constructor.newInstance(spreadBuilder.toArray(new Object[spreadBuilder.size()]));
            default:
                Intrinsics.checkNotNullParameter(args, "args");
                m3.n.t(this, args);
                return ((Constructor) this.a).newInstance(Arrays.copyOf(args, args.length));
        }
    }
}
