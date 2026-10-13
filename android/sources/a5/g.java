package a5;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.util.Log;
import com.android.billingclient.api.BillingResult;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.upstream.DataSource;
import java.util.ArrayList;
import java.util.List;

/* loaded from: classes.dex */
public final class g implements DataSource.Factory, yc.d {

    /* renamed from: d, reason: collision with root package name */
    public int f155d;

    /* renamed from: e, reason: collision with root package name */
    public int f156e;

    /* renamed from: i, reason: collision with root package name */
    public Object f157i;

    public g(byte[] bArr) {
        this.f157i = bArr;
    }

    @Override // yc.d
    public int a() {
        return this.f155d;
    }

    @Override // yc.d
    public int b() {
        return this.f156e;
    }

    @Override // yc.d
    public int c() {
        int i5 = this.f155d;
        return i5 == -1 ? ((ke.w) this.f157i).x() : i5;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource.Factory
    public DataSource createDataSource() {
        return new ie.w(this.f155d, this.f156e, (e4.r) this.f157i);
    }

    public int d() {
        return ((((byte[]) this.f157i).length - this.f155d) * 8) - this.f156e;
    }

    public BillingResult e() {
        BillingResult billingResult = new BillingResult();
        billingResult.a = this.f155d;
        billingResult.f3600b = this.f156e;
        billingResult.f3601c = (String) this.f157i;
        return billingResult;
    }

    public io.sentry.android.core.internal.threaddump.a f() {
        int i5 = this.f156e;
        if (i5 < 0 || i5 >= this.f155d) {
            return null;
        }
        ArrayList arrayList = (ArrayList) this.f157i;
        this.f156e = i5 + 1;
        return (io.sentry.android.core.internal.threaddump.a) arrayList.get(i5);
    }

    public int g(int i5) {
        byte[] bArr = (byte[]) this.f157i;
        if (i5 <= 0 || i5 > 32 || i5 > d()) {
            throw new IllegalArgumentException(String.valueOf(i5));
        }
        int i6 = this.f156e;
        int i10 = 0;
        if (i6 > 0) {
            int i11 = 8 - i6;
            int i12 = i5 < i11 ? i5 : i11;
            int i13 = i11 - i12;
            int i14 = this.f155d;
            int i15 = (((255 >> (8 - i12)) << i13) & bArr[i14]) >> i13;
            i5 -= i12;
            int i16 = i6 + i12;
            this.f156e = i16;
            if (i16 == 8) {
                this.f156e = 0;
                this.f155d = i14 + 1;
            }
            i10 = i15;
        }
        if (i5 > 0) {
            while (i5 >= 8) {
                int i17 = i10 << 8;
                int i18 = this.f155d;
                int i19 = i17 | (bArr[i18] & 255);
                this.f155d = i18 + 1;
                i5 -= 8;
                i10 = i19;
            }
            if (i5 > 0) {
                int i20 = 8 - i5;
                int i21 = ((bArr[this.f155d] & ((255 >> i20) << i20)) >> i20) | (i10 << i5);
                this.f156e += i5;
                return i21;
            }
        }
        return i10;
    }

    public synchronized int h() {
        PackageInfo packageInfo;
        if (this.f155d == 0) {
            try {
                packageInfo = jf.c.a((Context) this.f157i).a.getPackageManager().getPackageInfo("com.google.android.gms", 0);
            } catch (PackageManager.NameNotFoundException e9) {
                Log.w("Metadata", "Failed to find package ".concat(e9.toString()));
                packageInfo = null;
            }
            if (packageInfo != null) {
                this.f155d = packageInfo.versionCode;
            }
        }
        return this.f155d;
    }

    public synchronized int i() {
        int i5 = this.f156e;
        if (i5 != 0) {
            return i5;
        }
        Context context = (Context) this.f157i;
        PackageManager packageManager = context.getPackageManager();
        if (jf.c.a(context).a.getPackageManager().checkPermission("com.google.android.c2dm.permission.SEND", "com.google.android.gms") == -1) {
            Log.e("Metadata", "Google Play services missing or without correct permission.");
            return 0;
        }
        int i6 = 1;
        if (!gf.c.c()) {
            Intent intent = new Intent("com.google.android.c2dm.intent.REGISTER");
            intent.setPackage("com.google.android.gms");
            List<ResolveInfo> queryIntentServices = packageManager.queryIntentServices(intent, 0);
            if (queryIntentServices != null && !queryIntentServices.isEmpty()) {
                this.f156e = i6;
                return i6;
            }
        }
        Intent intent2 = new Intent("com.google.iid.TOKEN_REQUEST");
        intent2.setPackage("com.google.android.gms");
        List<ResolveInfo> queryBroadcastReceivers = packageManager.queryBroadcastReceivers(intent2, 0);
        if (queryBroadcastReceivers != null && !queryBroadcastReceivers.isEmpty()) {
            i6 = 2;
            this.f156e = i6;
            return i6;
        }
        Log.w("Metadata", "Failed to resolve IID implementation package, falling back");
        if (true == gf.c.c()) {
            i6 = 2;
        }
        this.f156e = i6;
        return i6;
    }

    public g(int i5) {
        switch (i5) {
            case 4:
                this.f157i = new g[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER];
                this.f155d = 0;
                this.f156e = 0;
                break;
            default:
                this.f157i = new e4.r(11);
                this.f155d = 8000;
                this.f156e = 8000;
                break;
        }
    }
}
