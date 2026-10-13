package qh;

import a5.k0;
import android.content.Context;
import android.content.pm.PackageManager;
import android.content.pm.Signature;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.util.Base64;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.Iterator;
import jg.l;

/* loaded from: classes3.dex */
public final class f {

    /* renamed from: d, reason: collision with root package name */
    public static final dg.b f16896d = new dg.b("AgeSignalsService", 0);
    public final Handler a = new Handler(Looper.getMainLooper());

    /* renamed from: b, reason: collision with root package name */
    public final Context f16897b;

    /* renamed from: c, reason: collision with root package name */
    public final dg.g f16898c;

    public f(Context context) {
        String str;
        this.f16897b = context;
        dg.b bVar = dg.i.a;
        try {
            if (context.getPackageManager().getApplicationInfo("com.android.vending", 0).enabled) {
                try {
                    Signature[] signatureArr = context.getPackageManager().getPackageInfo("com.android.vending", 64).signatures;
                    if (signatureArr == null || (signatureArr.length) == 0) {
                        bVar.d("Play Store package is not signed -- possibly self-built package. Could not verify.", new Object[0]);
                    } else {
                        ArrayList arrayList = new ArrayList();
                        for (Signature signature : signatureArr) {
                            byte[] byteArray = signature.toByteArray();
                            try {
                                MessageDigest messageDigest = MessageDigest.getInstance("SHA-256");
                                messageDigest.update(byteArray);
                                str = Base64.encodeToString(messageDigest.digest(), 11);
                            } catch (NoSuchAlgorithmException unused) {
                                str = "";
                            }
                            arrayList.add(str);
                            if (!"8P1sW0EPJcslw7UzRsiXL64w-O50Ed-RBICtay1g24M".equals(str)) {
                                String str2 = Build.TAGS;
                                if ((!str2.contains("dev-keys") && !str2.contains("test-keys")) || !"GXWy8XF3vIml3_MfnmSmyuKBpT3B0dWbHRR_4cgq-gA".equals(str)) {
                                }
                            }
                            this.f16898c = new dg.g(context, f16896d, b.a);
                            return;
                        }
                        StringBuilder sb2 = new StringBuilder();
                        Iterator it = arrayList.iterator();
                        if (it.hasNext()) {
                            while (true) {
                                sb2.append((CharSequence) it.next());
                                if (!it.hasNext()) {
                                    break;
                                } else {
                                    sb2.append((CharSequence) ", ");
                                }
                            }
                        }
                        bVar.d(s4.h.f("Play Store package certs are not valid. Found these sha256 certs: [", sb2.toString(), "]."), new Object[0]);
                    }
                } catch (PackageManager.NameNotFoundException unused2) {
                    bVar.d("Play Store package is not found.", new Object[0]);
                }
            } else {
                bVar.d("Play Store package is disabled.", new Object[0]);
            }
        } catch (PackageManager.NameNotFoundException unused3) {
            bVar.d("Play Store package is not found.", new Object[0]);
        }
        this.f16898c = null;
    }

    public static l a(int i5) {
        f16896d.a(Integer.valueOf(i5));
        return k0.r(new a(i5, 0));
    }

    public final boolean b() {
        try {
            return ((long) this.f16897b.getPackageManager().getPackageInfo("com.android.vending", 0).versionCode) >= 85222500;
        } catch (PackageManager.NameNotFoundException e9) {
            f16896d.b(e9, "Phonesky not found.", new Object[0]);
            return false;
        }
    }
}
