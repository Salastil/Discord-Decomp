package sp;

import fp.o;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import xq.l;

/* loaded from: classes3.dex */
public final class g extends b {

    /* renamed from: g, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f18086g = {com.discord.chat.bridge.botuikit.a.o(g.class, "allValueArguments", "getAllValueArguments()Ljava/util/Map;", 0)};

    /* renamed from: f, reason: collision with root package name */
    public final xq.i f18087f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(op.d dVar, e4.i c6) {
        super(c6, dVar, o.f8893m);
        Intrinsics.checkNotNullParameter(c6, "c");
        l lVar = (l) ((up.a) c6.f7952d).a;
        lVar.getClass();
        this.f18087f = new xq.i(lVar, f.f18085d);
    }

    @Override // sp.b, jp.b
    public final Map b() {
        return (Map) ys.d.O(this.f18087f, f18086g[0]);
    }
}
