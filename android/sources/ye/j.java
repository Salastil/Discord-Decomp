package ye;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.Signature;
import android.content.pm.SigningInfo;
import android.os.Build;
import android.util.Log;
import bf.t;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class j {

    /* renamed from: b, reason: collision with root package name */
    public static j f20924b;
    public final Context a;

    public j(Context context) {
        this.a = context.getApplicationContext();
    }

    public static j a(Context context) {
        t.g(context);
        synchronized (j.class) {
            if (f20924b == null) {
                m mVar = q.a;
                synchronized (q.class) {
                    if (q.f20936c == null) {
                        q.f20936c = context.getApplicationContext();
                    } else {
                        Log.w("GoogleCertificates", "GoogleCertificates has been initialized already");
                    }
                }
                f20924b = new j(context);
            }
        }
        return f20924b;
    }

    /* JADX WARN: Code restructure failed: missing block: B:42:0x00f6, code lost:
    
        r5 = r9;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final boolean b(PackageInfo packageInfo, boolean z5) {
        zf.f fVar;
        SigningInfo signingInfo;
        zf.f fVar2;
        int i5;
        if (packageInfo != null) {
            if (z5 && ("com.android.vending".equals(packageInfo.packageName) || "com.google.android.gms".equals(packageInfo.packageName))) {
                ApplicationInfo applicationInfo = packageInfo.applicationInfo;
                z5 = (applicationInfo == null || (applicationInfo.flags & 129) == 0) ? false : true;
            }
            try {
                fVar = z5 ? p.f20934c : p.f20933b;
                int i6 = Build.VERSION.SDK_INT;
                if (i6 < 28) {
                    Signature[] signatureArr = packageInfo.signatures;
                    byte[] bArr = null;
                    if (signatureArr != null && signatureArr.length == 1) {
                        bArr = signatureArr[0].toByteArray();
                    }
                    if (bArr != null) {
                        zf.b bVar = zf.e.f21227e;
                        Object[] objArr = {bArr};
                        tn.g.E(1, objArr);
                        fVar2 = new zf.f(1, objArr);
                    } else {
                        zf.b bVar2 = zf.e.f21227e;
                        fVar2 = zf.f.f21228w;
                    }
                } else {
                    if (i6 < 28) {
                        throw new IllegalStateException();
                    }
                    signingInfo = packageInfo.signingInfo;
                    if (signingInfo != null && !signingInfo.hasMultipleSigners() && signingInfo.getSigningCertificateHistory() != null) {
                        zf.b bVar3 = zf.e.f21227e;
                        Object[] objArr2 = new Object[4];
                        Signature[] signingCertificateHistory = signingInfo.getSigningCertificateHistory();
                        int length = signingCertificateHistory.length;
                        int i10 = 0;
                        int i11 = 0;
                        while (i10 < length) {
                            byte[] byteArray = signingCertificateHistory[i10].toByteArray();
                            byteArray.getClass();
                            int length2 = objArr2.length;
                            int i12 = i11 + 1;
                            if (i12 < 0) {
                                throw new IllegalArgumentException("cannot store more than Integer.MAX_VALUE elements");
                            }
                            if (i12 <= length2) {
                                i5 = length2;
                            } else {
                                i5 = (length2 >> 1) + length2 + 1;
                                if (i5 < i12) {
                                    int highestOneBit = Integer.highestOneBit(i11);
                                    i5 = highestOneBit + highestOneBit;
                                }
                                if (i5 < 0) {
                                    i5 = Integer.MAX_VALUE;
                                }
                            }
                            if (i5 > length2) {
                                objArr2 = Arrays.copyOf(objArr2, i5);
                            }
                            objArr2[i11] = byteArray;
                            i10++;
                            i11 = i12;
                        }
                        fVar2 = i11 == 0 ? zf.f.f21228w : new zf.f(i11, objArr2);
                    }
                    zf.b bVar4 = zf.e.f21227e;
                    fVar2 = zf.f.f21228w;
                }
            } catch (IllegalArgumentException unused) {
                Log.i("GoogleSignatureVerifier", "package info is not set correctly");
                if ((z5 ? c(packageInfo, p.a) : c(packageInfo, p.a[0])) != null) {
                }
            }
            if (fVar2.isEmpty()) {
                throw new IllegalArgumentException("Unable to obtain package certificate history.");
            }
            zf.e h6 = fVar2.h();
            int size = h6.size();
            int i13 = 0;
            while (i13 < size) {
                byte[] bArr2 = (byte[]) h6.get(i13);
                zf.b listIterator = fVar.listIterator(0);
                do {
                    int i14 = i13 + 1;
                    if (listIterator.hasNext()) {
                    }
                } while (!Arrays.equals(bArr2, (byte[]) listIterator.next()));
                return true;
            }
        }
        return false;
    }

    public static n c(PackageInfo packageInfo, n... nVarArr) {
        Signature[] signatureArr = packageInfo.signatures;
        if (signatureArr != null) {
            if (signatureArr.length != 1) {
                Log.w("GoogleSignatureVerifier", "Package has more than one signature.");
                return null;
            }
            o oVar = new o(packageInfo.signatures[0].toByteArray());
            for (int i5 = 0; i5 < nVarArr.length; i5++) {
                if (nVarArr[i5].equals(oVar)) {
                    return nVarArr[i5];
                }
            }
        }
        return null;
    }
}
