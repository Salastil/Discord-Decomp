package th;

import java.io.File;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class m1 {
    public final s a;

    /* renamed from: b, reason: collision with root package name */
    public final v0 f18511b;

    /* renamed from: c, reason: collision with root package name */
    public final p0 f18512c;

    /* renamed from: d, reason: collision with root package name */
    public final uh.f f18513d;

    /* renamed from: e, reason: collision with root package name */
    public final uh.f f18514e;

    public m1(s sVar, uh.f fVar, v0 v0Var, uh.f fVar2, p0 p0Var) {
        this.a = sVar;
        this.f18513d = fVar;
        this.f18511b = v0Var;
        this.f18514e = fVar2;
        this.f18512c = p0Var;
    }

    public final void a(l1 l1Var) {
        String str = (String) l1Var.f10877b;
        int i5 = l1Var.f18500d;
        int i6 = l1Var.a;
        int i10 = l1Var.f18499c;
        long j = l1Var.f18501e;
        s sVar = this.a;
        File j5 = sVar.j(i10, j, str);
        if (!j5.exists()) {
            throw new l0(a3.e.l("Cannot find pack files to promote for pack ", str, " at ", j5.getAbsolutePath()), i6);
        }
        File j7 = sVar.j(i5, j, str);
        j7.mkdirs();
        if (!j5.renameTo(j7)) {
            String absolutePath = j5.getAbsolutePath();
            String absolutePath2 = j7.getAbsolutePath();
            StringBuilder t5 = a3.e.t("Cannot promote pack ", str, " from ", absolutePath, " to ");
            t5.append(absolutePath2);
            throw new l0(t5.toString(), i6);
        }
        ((Executor) this.f18514e.a()).execute(new com.google.android.gms.internal.play_billing.v0(22, this, l1Var));
        v0 v0Var = this.f18511b;
        v0Var.getClass();
        v0Var.b(new d5.c(v0Var, str, i5, j));
        this.f18512c.b(str);
        ((u1) this.f18513d.a()).c(i6, str);
    }
}
