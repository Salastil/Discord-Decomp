package th;

import java.io.File;
import java.io.IOException;
import java.security.NoSuchAlgorithmException;

/* loaded from: classes3.dex */
public final class q1 {

    /* renamed from: b, reason: collision with root package name */
    public static final a5.m f18556b = new a5.m("VerifySliceTaskHandler", 3);
    public final s a;

    public q1(s sVar) {
        this.a = sVar;
    }

    public final void a(p1 p1Var) {
        String str = (String) p1Var.f10877b;
        String str2 = (String) p1Var.f10877b;
        String str3 = p1Var.f18554e;
        int i5 = p1Var.a;
        File k = this.a.k(p1Var.f18552c, str2, p1Var.f18553d, str3);
        if (!k.exists()) {
            throw new l0(s4.h.f("Cannot find unverified files for slice ", str3, "."), i5);
        }
        try {
            s sVar = this.a;
            String str4 = p1Var.f18554e;
            int i6 = p1Var.f18552c;
            long j = p1Var.f18553d;
            sVar.getClass();
            File file = new File(new File(new File(sVar.c(i6, j, str), "_slices"), "_metadata"), str4);
            if (!file.exists()) {
                throw new l0("Cannot find metadata files for slice " + str4 + ".", i5);
            }
            try {
                if (!a.a(o1.a(k, file)).equals(p1Var.f18555f)) {
                    throw new l0(s4.h.f("Verification failed for slice ", str4, "."), i5);
                }
                f18556b.e("Verification of slice %s of pack %s successful.", str4, str);
                File l6 = this.a.l(p1Var.f18552c, (String) p1Var.f10877b, p1Var.f18553d, p1Var.f18554e);
                if (!l6.exists()) {
                    l6.mkdirs();
                }
                if (!k.renameTo(l6)) {
                    throw new l0(s4.h.f("Failed to move slice ", str3, " after verification."), i5);
                }
            } catch (IOException e9) {
                throw new l0(s4.h.f("Could not digest file during verification for slice ", str3, "."), e9, i5);
            } catch (NoSuchAlgorithmException e10) {
                throw new l0("SHA256 algorithm not supported.", e10, i5);
            }
        } catch (IOException e11) {
            throw new l0(s4.h.f("Could not reconstruct slice archive during verification for slice ", str3, "."), e11, i5);
        }
    }
}
