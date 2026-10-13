package th;

import android.os.ParcelFileDescriptor;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.util.zip.GZIPInputStream;

/* loaded from: classes3.dex */
public final class k1 {

    /* renamed from: c, reason: collision with root package name */
    public static final a5.m f18495c = new a5.m("PatchSliceTaskHandler", 3);
    public final s a;

    /* renamed from: b, reason: collision with root package name */
    public final uh.f f18496b;

    public k1(s sVar, uh.f fVar) {
        this.a = sVar;
        this.f18496b = fVar;
    }

    public final void a(j1 j1Var) {
        a5.m mVar = f18495c;
        String str = (String) j1Var.f10877b;
        int i5 = j1Var.a;
        ParcelFileDescriptor.AutoCloseInputStream autoCloseInputStream = j1Var.j;
        int i6 = j1Var.f18482c;
        long j = j1Var.f18483d;
        s sVar = this.a;
        File j5 = sVar.j(i6, j, str);
        File file = new File(sVar.j(i6, j, str), "_metadata");
        String str2 = j1Var.f18487h;
        File file2 = new File(file, str2);
        try {
            InputStream gZIPInputStream = j1Var.f18486g != 2 ? autoCloseInputStream : new GZIPInputStream(autoCloseInputStream, 8192);
            try {
                u uVar = new u(j5, file2);
                File k = this.a.k(j1Var.f18484e, (String) j1Var.f10877b, j1Var.f18485f, j1Var.f18487h);
                if (!k.exists()) {
                    k.mkdirs();
                }
                n1 n1Var = new n1(this.a, (String) j1Var.f10877b, j1Var.f18484e, j1Var.f18485f, j1Var.f18487h);
                m3.n.d(uVar, gZIPInputStream, new o0(k, n1Var), j1Var.f18488i);
                n1Var.h(0);
                gZIPInputStream.close();
                mVar.e("Patching and extraction finished for slice %s of pack %s.", str2, str);
                ((u1) this.f18496b.a()).d(i5, 0, str, str2);
                try {
                    autoCloseInputStream.close();
                } catch (IOException unused) {
                    mVar.g("Could not close file for slice %s of pack %s.", str2, str);
                }
            } finally {
            }
        } catch (IOException e9) {
            mVar.b("IOException during patching %s.", e9.getMessage());
            throw new l0(s4.h.g("Error patching slice ", str2, " of pack ", str, "."), e9, i5);
        }
    }
}
