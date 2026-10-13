package th;

import java.io.File;
import java.io.IOException;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class d1 {
    public final s a;

    /* renamed from: b, reason: collision with root package name */
    public final v0 f18428b;

    /* renamed from: c, reason: collision with root package name */
    public final p0 f18429c;

    /* renamed from: d, reason: collision with root package name */
    public final g1 f18430d;

    /* renamed from: e, reason: collision with root package name */
    public final uh.f f18431e;

    /* renamed from: f, reason: collision with root package name */
    public final uh.f f18432f;

    public d1(s sVar, uh.f fVar, v0 v0Var, uh.f fVar2, p0 p0Var, g1 g1Var) {
        this.a = sVar;
        this.f18431e = fVar;
        this.f18428b = v0Var;
        this.f18432f = fVar2;
        this.f18429c = p0Var;
        this.f18430d = g1Var;
    }

    public final void a(c1 c1Var) {
        String str = (String) c1Var.f10877b;
        int i5 = c1Var.a;
        int i6 = c1Var.f18411c;
        long j = c1Var.f18412d;
        s sVar = this.a;
        sVar.getClass();
        File file = new File(sVar.c(i6, j, str), "_packs");
        File file2 = new File(new File(sVar.c(i6, j, str), "_slices"), "_metadata");
        if (!file.exists() || !file2.exists()) {
            throw new l0(s4.h.f("Cannot find pack files to move for pack ", str, "."), i5);
        }
        File j5 = sVar.j(i6, j, str);
        j5.mkdirs();
        if (!file.renameTo(j5)) {
            throw new l0("Cannot move merged pack files to final location.", i5);
        }
        new File(sVar.j(i6, j, str), "merge.tmp").delete();
        File file3 = new File(sVar.j(i6, j, str), "_metadata");
        file3.mkdirs();
        if (!file2.renameTo(file3)) {
            throw new l0("Cannot move metadata files to final location.", i5);
        }
        try {
            this.f18430d.b(c1Var.f18411c, (String) c1Var.f10877b, c1Var.f18412d, c1Var.f18413e);
            ((Executor) this.f18432f.a()).execute(new ii.o(21, this, c1Var));
            v0 v0Var = this.f18428b;
            v0Var.getClass();
            v0Var.b(new d5.c(v0Var, str, i6, j));
            this.f18429c.b(str);
            ((u1) this.f18431e.a()).c(i5, str);
        } catch (IOException e9) {
            throw new l0(a3.e.l("Could not write asset pack version tag for pack ", str, ": ", e9.getMessage()), i5);
        }
    }
}
