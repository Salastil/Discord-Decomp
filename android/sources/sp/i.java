package sp;

import cp.d0;
import fp.o;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import xq.l;

/* loaded from: classes3.dex */
public final class i extends b {

    /* renamed from: g, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f18090g = {com.discord.chat.bridge.botuikit.a.o(i.class, "allValueArguments", "getAllValueArguments()Ljava/util/Map;", 0)};

    /* renamed from: f, reason: collision with root package name */
    public final xq.i f18091f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i(op.d annotation, e4.i c6) {
        super(c6, annotation, o.f8903w);
        Intrinsics.checkNotNullParameter(annotation, "annotation");
        Intrinsics.checkNotNullParameter(c6, "c");
        xq.o oVar = ((up.a) c6.f7952d).a;
        d0 d0Var = new d0(20, this);
        l lVar = (l) oVar;
        lVar.getClass();
        this.f18091f = new xq.i(lVar, d0Var);
    }

    @Override // sp.b, jp.b
    public final Map b() {
        return (Map) ys.d.O(this.f18091f, f18090g[0]);
    }
}
