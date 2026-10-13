package s9;

import a3.f;
import android.app.ActivityOptions;
import android.content.Intent;
import android.graphics.Bitmap;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.SparseArray;
import androidx.appcompat.widget.w;
import androidx.browser.customtabs.CustomTabsSession;
import e4.l;
import io.sentry.internal.debugmeta.c;
import java.io.BufferedInputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.util.HashMap;
import javax.crypto.Cipher;
import javax.crypto.CipherInputStream;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;
import je.g;
import je.k;
import je.m;
import je.n;
import je.o;
import je.r;
import ke.d0;
import kotlin.jvm.internal.Intrinsics;
import n9.b;
import okio.Sink;
import q.h;
import q.i;
import q.j;
import qa.t;
import wi.d;

/* loaded from: classes3.dex */
public final class a implements m {
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f17827b;

    /* renamed from: c, reason: collision with root package name */
    public Object f17828c;

    /* renamed from: d, reason: collision with root package name */
    public Object f17829d;

    /* renamed from: e, reason: collision with root package name */
    public Object f17830e;

    public a(b bitmapFrameCache, da.a animatedDrawableBackend, boolean z5) {
        Intrinsics.checkNotNullParameter(bitmapFrameCache, "bitmapFrameCache");
        Intrinsics.checkNotNullParameter(animatedDrawableBackend, "animatedDrawableBackend");
        this.f17827b = bitmapFrameCache;
        this.f17828c = animatedDrawableBackend;
        this.a = z5;
        t tVar = new t(4, this);
        this.f17830e = tVar;
        this.f17829d = new f(animatedDrawableBackend, z5, tVar);
    }

    public static int k(k kVar, int i5) {
        int hashCode = kVar.f12741b.hashCode() + (kVar.a * 31);
        if (i5 < 2) {
            long a = n.a(kVar.f12744e);
            return (hashCode * 31) + ((int) (a ^ (a >>> 32)));
        }
        return kVar.f12744e.hashCode() + (hashCode * 31);
    }

    public static k l(int i5, DataInputStream dataInputStream) {
        o b10;
        int readInt = dataInputStream.readInt();
        String readUTF = dataInputStream.readUTF();
        if (i5 < 2) {
            long readLong = dataInputStream.readLong();
            g gVar = new g();
            gVar.a(Long.valueOf(readLong), "exo_len");
            b10 = o.f12749c.b(gVar);
        } else {
            b10 = w.b(dataInputStream);
        }
        return new k(readInt, readUTF, b10);
    }

    @Override // je.m
    public void a(HashMap hashMap) {
        DataOutputStream dataOutputStream;
        c cVar = (c) this.f17829d;
        DataOutputStream dataOutputStream2 = null;
        try {
            ke.a S = cVar.S();
            r rVar = (r) this.f17830e;
            if (rVar == null) {
                this.f17830e = new r(S);
            } else {
                rVar.c(S);
            }
            dataOutputStream = new DataOutputStream((r) this.f17830e);
        } catch (Throwable th2) {
            th = th2;
        }
        try {
            dataOutputStream.writeInt(2);
            dataOutputStream.writeInt(0);
            dataOutputStream.writeInt(hashMap.size());
            int i5 = 0;
            for (k kVar : hashMap.values()) {
                dataOutputStream.writeInt(kVar.a);
                dataOutputStream.writeUTF(kVar.f12741b);
                w.d(kVar.f12744e, dataOutputStream);
                i5 += k(kVar, 2);
            }
            dataOutputStream.writeInt(i5);
            dataOutputStream.close();
            ((File) cVar.f11623i).delete();
            int i6 = d0.a;
            this.a = false;
        } catch (Throwable th3) {
            th = th3;
            dataOutputStream2 = dataOutputStream;
            d0.g(dataOutputStream2);
            throw th;
        }
    }

    @Override // je.m
    public void b(k kVar, boolean z5) {
        this.a = true;
    }

    @Override // je.m
    public void c(k kVar) {
        this.a = true;
    }

    @Override // je.m
    public boolean d() {
        c cVar = (c) this.f17829d;
        return ((File) cVar.f11622e).exists() || ((File) cVar.f11623i).exists();
    }

    @Override // je.m
    public void e(HashMap hashMap) {
        if (this.a) {
            a(hashMap);
        }
    }

    @Override // je.m
    public void g(HashMap hashMap, SparseArray sparseArray) {
        BufferedInputStream bufferedInputStream;
        DataInputStream dataInputStream;
        ke.b.k(!this.a);
        Cipher cipher = (Cipher) this.f17827b;
        c cVar = (c) this.f17829d;
        File file = (File) cVar.f11622e;
        File file2 = (File) cVar.f11622e;
        File file3 = (File) cVar.f11623i;
        if (file.exists() || file3.exists()) {
            DataInputStream dataInputStream2 = null;
            try {
                if (file3.exists()) {
                    file2.delete();
                    file3.renameTo(file2);
                }
                bufferedInputStream = new BufferedInputStream(new FileInputStream(file2));
                dataInputStream = new DataInputStream(bufferedInputStream);
            } catch (IOException unused) {
            } catch (Throwable th2) {
                th = th2;
            }
            try {
                int readInt = dataInputStream.readInt();
                if (readInt >= 0 && readInt <= 2) {
                    if ((dataInputStream.readInt() & 1) != 0) {
                        if (cipher != null) {
                            byte[] bArr = new byte[16];
                            dataInputStream.readFully(bArr);
                            IvParameterSpec ivParameterSpec = new IvParameterSpec(bArr);
                            try {
                                SecretKeySpec secretKeySpec = (SecretKeySpec) this.f17828c;
                                int i5 = d0.a;
                                cipher.init(2, secretKeySpec, ivParameterSpec);
                                dataInputStream = new DataInputStream(new CipherInputStream(bufferedInputStream, cipher));
                            } catch (InvalidAlgorithmParameterException e9) {
                                e = e9;
                                throw new IllegalStateException(e);
                            } catch (InvalidKeyException e10) {
                                e = e10;
                                throw new IllegalStateException(e);
                            }
                        }
                    }
                    int readInt2 = dataInputStream.readInt();
                    int i6 = 0;
                    for (int i10 = 0; i10 < readInt2; i10++) {
                        k l6 = l(readInt, dataInputStream);
                        String str = l6.f12741b;
                        hashMap.put(str, l6);
                        sparseArray.put(l6.a, str);
                        i6 += k(l6, readInt);
                    }
                    int readInt3 = dataInputStream.readInt();
                    boolean z5 = dataInputStream.read() == -1;
                    if (readInt3 == i6 && z5) {
                        d0.g(dataInputStream);
                        return;
                    }
                }
                d0.g(dataInputStream);
            } catch (IOException unused2) {
                dataInputStream2 = dataInputStream;
                if (dataInputStream2 != null) {
                    d0.g(dataInputStream2);
                }
                hashMap.clear();
                sparseArray.clear();
                file2.delete();
                file3.delete();
            } catch (Throwable th3) {
                th = th3;
                dataInputStream2 = dataInputStream;
                if (dataInputStream2 != null) {
                    d0.g(dataInputStream2);
                }
                throw th;
            }
            hashMap.clear();
            sparseArray.clear();
            file2.delete();
            file3.delete();
        }
    }

    @Override // je.m
    public void h() {
        c cVar = (c) this.f17829d;
        ((File) cVar.f11622e).delete();
        ((File) cVar.f11623i).delete();
    }

    public void i() {
        synchronized (((ps.g) this.f17830e)) {
            if (this.a) {
                return;
            }
            this.a = true;
            qs.b.c((Sink) this.f17828c);
            try {
                ((f) this.f17827b).a();
            } catch (IOException unused) {
            }
        }
    }

    public l j() {
        Intent intent = (Intent) this.f17827b;
        if (!intent.hasExtra("android.support.customtabs.extra.SESSION")) {
            Bundle bundle = new Bundle();
            bundle.putBinder("android.support.customtabs.extra.SESSION", null);
            intent.putExtras(bundle);
        }
        intent.putExtra("android.support.customtabs.extra.EXTRA_ENABLE_INSTANT_APPS", this.a);
        ((d) this.f17828c).getClass();
        intent.putExtras(new Bundle());
        Bundle bundle2 = (Bundle) this.f17830e;
        if (bundle2 != null) {
            intent.putExtras(bundle2);
        }
        intent.putExtra("androidx.browser.customtabs.extra.SHARE_STATE", 0);
        int i5 = Build.VERSION.SDK_INT;
        String a = i.a();
        if (!TextUtils.isEmpty(a)) {
            Bundle bundleExtra = intent.hasExtra("com.android.browser.headers") ? intent.getBundleExtra("com.android.browser.headers") : new Bundle();
            if (!bundleExtra.containsKey("Accept-Language")) {
                bundleExtra.putString("Accept-Language", a);
                intent.putExtra("com.android.browser.headers", bundleExtra);
            }
        }
        if (i5 >= 34) {
            if (((ActivityOptions) this.f17829d) == null) {
                this.f17829d = h.a();
            }
            j.a((ActivityOptions) this.f17829d, false);
        }
        ActivityOptions activityOptions = (ActivityOptions) this.f17829d;
        return new l(18, intent, activityOptions != null ? activityOptions.toBundle() : null);
    }

    public boolean m(int i5, Bitmap targetBitmap) {
        Intrinsics.checkNotNullParameter(targetBitmap, "targetBitmap");
        try {
            ((f) this.f17829d).u(i5, targetBitmap);
            return true;
        } catch (IllegalStateException e9) {
            if (!p8.a.a.isLoggable(6)) {
                return false;
            }
            p8.a.a.e(a.class.getSimpleName(), "Rendering of frame unsuccessful. Frame number: " + i5, e9);
            return false;
        }
    }

    public a(ps.g this$0, f editor) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(editor, "editor");
        this.f17830e = this$0;
        this.f17827b = editor;
        Sink p3 = editor.p(1);
        this.f17828c = p3;
        this.f17829d = new ps.f(this$0, this, p3);
    }

    public a(File file) {
        this.f17827b = null;
        this.f17828c = null;
        this.f17829d = new c(file);
    }

    public a() {
        this.f17827b = new Intent("android.intent.action.VIEW");
        this.f17828c = new d(15);
        this.a = true;
    }

    public a(CustomTabsSession customTabsSession) {
        Intent intent = new Intent("android.intent.action.VIEW");
        this.f17827b = intent;
        this.f17828c = new d(15);
        this.a = true;
        if (customTabsSession != null) {
            intent.setPackage(customTabsSession.f1190c.getPackageName());
            q.g gVar = customTabsSession.f1189b;
            Bundle bundle = new Bundle();
            bundle.putBinder("android.support.customtabs.extra.SESSION", gVar);
            intent.putExtras(bundle);
        }
    }

    @Override // je.m
    public void f(long j) {
    }
}
