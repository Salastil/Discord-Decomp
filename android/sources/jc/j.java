package jc;

import android.content.Context;
import android.content.res.AssetManager;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.provider.Settings;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.Serializable;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class j {
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f12530b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f12531c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f12532d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f12533e;

    /* renamed from: f, reason: collision with root package name */
    public final Object f12534f;

    /* renamed from: g, reason: collision with root package name */
    public Object f12535g;

    /* renamed from: h, reason: collision with root package name */
    public Object f12536h;

    /* JADX WARN: Removed duplicated region for block: B:18:0x005f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public j(Context context, hc.m mVar) {
        Uri uri;
        Context applicationContext = context.getApplicationContext();
        this.f12530b = applicationContext;
        this.f12531c = mVar;
        int i5 = ke.d0.a;
        Looper myLooper = Looper.myLooper();
        Handler handler = new Handler(myLooper == null ? Looper.getMainLooper() : myLooper, null);
        this.f12532d = handler;
        int i6 = ke.d0.a;
        this.f12533e = i6 >= 23 ? new h(this) : null;
        this.f12534f = i6 >= 21 ? new c4.d(3, this) : null;
        f fVar = f.f12513c;
        if (i6 >= 17) {
            String str = ke.d0.f13295c;
            if ("Amazon".equals(str) || "Xiaomi".equals(str)) {
                uri = Settings.Global.getUriFor("external_surround_sound_enabled");
                this.f12535g = uri != null ? new i(this, handler, applicationContext.getContentResolver(), uri) : null;
            }
        }
        uri = null;
        this.f12535g = uri != null ? new i(this, handler, applicationContext.getContentResolver(), uri) : null;
    }

    public static void a(j jVar, f fVar) {
        DefaultTrackSelector defaultTrackSelector;
        boolean z5;
        com.google.android.exoplayer2.e eVar;
        if (!jVar.a || fVar.equals((f) jVar.f12536h)) {
            return;
        }
        jVar.f12536h = fVar;
        k0 k0Var = (k0) ((hc.m) jVar.f12531c).f9784e;
        ke.b.k(k0Var.f12553f0 == Looper.myLooper());
        if (fVar.equals(k0Var.e())) {
            return;
        }
        k0Var.f12568w = fVar;
        ve.i iVar = k0Var.f12563r;
        if (iVar != null) {
            n0 n0Var = (n0) iVar.f19405d;
            synchronized (n0Var.f9658d) {
                defaultTrackSelector = n0Var.K;
            }
            if (defaultTrackSelector != null) {
                synchronized (defaultTrackSelector.f5457d) {
                    z5 = defaultTrackSelector.f5461h.f5485k0;
                }
                if (!z5 || (eVar = defaultTrackSelector.a) == null) {
                    return;
                }
                eVar.E.d(26);
            }
        }
    }

    public FileInputStream b(AssetManager assetManager, String str) {
        try {
            return assetManager.openFd(str).createInputStream();
        } catch (FileNotFoundException e9) {
            String message = e9.getMessage();
            if (message == null || !message.contains("compressed")) {
                return null;
            }
            ((y2.b) this.f12531c).e();
            return null;
        }
    }

    public void c(int i5, Serializable serializable) {
        ((Executor) this.f12530b).execute(new bb.a(this, i5, serializable, 12));
    }

    public j(AssetManager assetManager, Executor executor, y2.b bVar, String str, File file) {
        byte[] bArr;
        this.a = false;
        this.f12530b = executor;
        this.f12531c = bVar;
        this.f12534f = str;
        this.f12533e = file;
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 31) {
            bArr = y2.c.f20611d;
        } else {
            switch (i5) {
                case 24:
                case 25:
                    bArr = y2.c.f20615h;
                    break;
                case 26:
                    bArr = y2.c.f20614g;
                    break;
                case 27:
                    bArr = y2.c.f20613f;
                    break;
                case 28:
                case 29:
                case 30:
                    bArr = y2.c.f20612e;
                    break;
                default:
                    bArr = null;
                    break;
            }
        }
        this.f12532d = bArr;
    }
}
