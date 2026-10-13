package com.facebook.soloader;

import android.content.Context;
import android.content.pm.PackageManager;
import android.os.Parcel;
import android.os.StrictMode;
import android.util.Log;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class b extends i0 implements w {

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f5087e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f5088f;

    public b(Context context, String str, boolean z5) {
        super(context, str, z5);
        ArrayList arrayList = new ArrayList();
        this.f5087e = arrayList;
        this.f5088f = false;
        arrayList.add(new p(context, str, new File(context.getApplicationInfo().sourceDir)));
        if (context.getApplicationInfo().splitSourceDirs == null) {
            return;
        }
        try {
            for (String str2 : context.getApplicationInfo().splitSourceDirs) {
                p pVar = new p(context, str, new File(str2));
                o oVar = new o(pVar, pVar);
                try {
                    boolean z6 = oVar.i().length != 0;
                    oVar.close();
                    if (z6) {
                        Log.w("BackupSoSource", "adding backup source from split: " + pVar.toString());
                        this.f5087e.add(pVar);
                    }
                } catch (Throwable th2) {
                    try {
                        oVar.close();
                    } catch (Throwable th3) {
                        th2.addSuppressed(th3);
                    }
                    throw th2;
                }
            }
        } catch (IOException e9) {
            Log.w("BackupSoSource", "failed to read split apks", e9);
        }
    }

    @Override // com.facebook.soloader.w
    public final b0 a(Context context) {
        b bVar = new b(context, this.a.getName(), true);
        try {
            bVar.d(0);
            return bVar;
        } catch (IOException e9) {
            throw new RuntimeException(e9);
        }
    }

    @Override // com.facebook.soloader.e, com.facebook.soloader.b0
    public final String b() {
        return "BackupSoSource";
    }

    @Override // com.facebook.soloader.e, com.facebook.soloader.b0
    public final int c(String str, int i5, StrictMode.ThreadPolicy threadPolicy) {
        if (this.f5088f) {
            return super.c(str, i5, threadPolicy);
        }
        return 0;
    }

    @Override // com.facebook.soloader.i0, com.facebook.soloader.b0
    public final void d(int i5) {
        if ((i5 & 8) != 0) {
            return;
        }
        super.d(i5);
        this.f5088f = true;
    }

    @Override // com.facebook.soloader.i0
    public final byte[] e() {
        ArrayList arrayList = this.f5087e;
        Context context = this.f5110d;
        Parcel obtain = Parcel.obtain();
        try {
            obtain.writeByte((byte) 3);
            PackageManager packageManager = context.getPackageManager();
            int i5 = 0;
            if (packageManager != null) {
                try {
                    i5 = packageManager.getPackageInfo(context.getPackageName(), 0).versionCode;
                } catch (PackageManager.NameNotFoundException | RuntimeException unused) {
                }
            }
            obtain.writeInt(i5);
            obtain.writeInt(arrayList.size());
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                obtain.writeByteArray(((p) it.next()).e());
            }
            String str = context.getApplicationInfo().sourceDir;
            if (str == null) {
                obtain.writeByte((byte) 1);
                byte[] marshall = obtain.marshall();
                obtain.recycle();
                return marshall;
            }
            File canonicalFile = new File(str).getCanonicalFile();
            if (!canonicalFile.exists()) {
                obtain.writeByte((byte) 1);
                byte[] marshall2 = obtain.marshall();
                obtain.recycle();
                return marshall2;
            }
            obtain.writeByte((byte) 2);
            obtain.writeString(canonicalFile.getPath());
            obtain.writeLong(canonicalFile.lastModified());
            byte[] marshall3 = obtain.marshall();
            obtain.recycle();
            return marshall3;
        } catch (Throwable th2) {
            obtain.recycle();
            throw th2;
        }
    }

    @Override // com.facebook.soloader.i0
    public final g0[] f() {
        p pVar = (p) this.f5087e.get(0);
        pVar.getClass();
        o oVar = new o(pVar, pVar);
        try {
            n[] nVarArr = oVar.f5116d;
            if (nVarArr == null) {
                nVarArr = oVar.i();
                oVar.f5116d = nVarArr;
            }
            oVar.close();
            return nVarArr;
        } catch (Throwable th2) {
            try {
                oVar.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // com.facebook.soloader.i0
    public final h0 g() {
        return new j(this);
    }

    public final boolean j(String str) {
        for (g0 g0Var : new j(this).f()) {
            if (g0Var.f5099d.equals(str)) {
                Log.e("SoLoader", "Found " + str + " in BackupSoSource");
                Log.e("SoLoader", "Preparing BackupSoSource");
                d(0);
                return true;
            }
        }
        return false;
    }

    @Override // com.facebook.soloader.e, com.facebook.soloader.b0
    public final String toString() {
        String name;
        File file = this.a;
        try {
            name = String.valueOf(file.getCanonicalPath());
        } catch (IOException unused) {
            name = file.getName();
        }
        StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("BackupSoSource[root = ", name, " flags = ");
        m5.append(this.f5092b);
        m5.append(" apks = ");
        m5.append(this.f5087e.toString());
        m5.append("]");
        return m5.toString();
    }
}
