package hp;

import ip.a0;
import java.util.Collection;
import kotlin.collections.c1;
import kotlin.collections.o0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class g implements kp.c {

    /* renamed from: f, reason: collision with root package name */
    public static final hq.e f10165f;

    /* renamed from: g, reason: collision with root package name */
    public static final hq.b f10166g;
    public final a0 a;

    /* renamed from: b, reason: collision with root package name */
    public final xq.i f10167b;

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f10163d = {com.discord.chat.bridge.botuikit.a.o(g.class, "cloneable", "getCloneable()Lorg/jetbrains/kotlin/descriptors/impl/ClassDescriptorImpl;", 0)};

    /* renamed from: c, reason: collision with root package name */
    public static final e f10162c = new e();

    /* renamed from: e, reason: collision with root package name */
    public static final hq.c f10164e = fp.p.f8915l;

    static {
        hq.d dVar = fp.o.f8880c;
        f10165f = dVar.f();
        hq.c topLevelFqName = dVar.g();
        Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
        f10166g = new hq.b(topLevelFqName.b(), topLevelFqName.a.f());
    }

    public g(xq.l storageManager, lp.a0 moduleDescriptor) {
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(moduleDescriptor, "moduleDescriptor");
        f computeContainingDeclaration = f.f10160e;
        Intrinsics.checkNotNullParameter(computeContainingDeclaration, "computeContainingDeclaration");
        this.a = moduleDescriptor;
        this.f10167b = new xq.i(storageManager, new bs.q(4, this, storageManager));
    }

    @Override // kp.c
    public final boolean a(hq.c packageFqName, hq.e name) {
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        Intrinsics.checkNotNullParameter(name, "name");
        return Intrinsics.areEqual(name, f10165f) && Intrinsics.areEqual(packageFqName, f10164e);
    }

    @Override // kp.c
    public final Collection b(hq.c packageFqName) {
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        if (!Intrinsics.areEqual(packageFqName, f10164e)) {
            return o0.f13515d;
        }
        return c1.b((lp.j) ys.d.O(this.f10167b, f10163d[0]));
    }

    @Override // kp.c
    public final ip.f c(hq.b classId) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        if (!Intrinsics.areEqual(classId, f10166g)) {
            return null;
        }
        return (lp.j) ys.d.O(this.f10167b, f10163d[0]);
    }
}
