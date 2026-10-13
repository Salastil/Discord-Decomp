package hp;

import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import lp.a0;

/* loaded from: classes3.dex */
public final class j extends fp.i {

    /* renamed from: h, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f10170h = {com.discord.chat.bridge.botuikit.a.o(j.class, "customizer", "getCustomizer()Lorg/jetbrains/kotlin/builtins/jvm/JvmBuiltInsCustomizer;", 0)};

    /* renamed from: f, reason: collision with root package name */
    public fp.l f10171f;

    /* renamed from: g, reason: collision with root package name */
    public final xq.i f10172g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(xq.l storageManager) {
        super(storageManager);
        h kind = h.f10168d;
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(kind, "kind");
        this.f10172g = new xq.i(storageManager, new bs.q(5, this, storageManager));
    }

    public final o K() {
        return (o) ys.d.O(this.f10172g, f10170h[0]);
    }

    @Override // fp.i
    public final kp.b d() {
        return K();
    }

    @Override // fp.i
    public final Iterable m() {
        Iterable m5 = super.m();
        Intrinsics.checkNotNullExpressionValue(m5, "getClassDescriptorFactories(...)");
        xq.l lVar = this.f8862d;
        Intrinsics.checkNotNullExpressionValue(lVar, "getStorageManager(...)");
        a0 l6 = l();
        Intrinsics.checkNotNullExpressionValue(l6, "getBuiltInsModule(...)");
        return CollectionsKt.U(m5, new g(lVar, l6));
    }

    @Override // fp.i
    public final kp.d q() {
        return K();
    }
}
