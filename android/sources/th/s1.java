package th;

import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import com.discord.js_watchdog.SharedPreferencesKey;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.gms.tasks.Task;
import com.google.android.play.core.assetpacks.AssetPackManager;
import com.google.android.play.core.assetpacks.AssetPackState;
import com.google.android.play.core.assetpacks.AssetPackStateUpdateListener;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class s1 implements AssetPackManager {
    public static final a5.m k = new a5.m("AssetPackManager", 3);
    public final s a;

    /* renamed from: b, reason: collision with root package name */
    public final p f18572b;

    /* renamed from: c, reason: collision with root package name */
    public final r f18573c;

    /* renamed from: d, reason: collision with root package name */
    public final uh.b f18574d;

    /* renamed from: e, reason: collision with root package name */
    public final v0 f18575e;

    /* renamed from: f, reason: collision with root package name */
    public final p0 f18576f;

    /* renamed from: g, reason: collision with root package name */
    public final g1 f18577g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f18578h;

    /* renamed from: i, reason: collision with root package name */
    public final uh.f f18579i;
    public final uh.f j;

    public s1(s sVar, uh.f fVar, p pVar, r rVar, uh.b bVar, v0 v0Var, p0 p0Var, uh.f fVar2, g1 g1Var) {
        new Handler(Looper.getMainLooper());
        this.a = sVar;
        this.f18579i = fVar;
        this.f18572b = pVar;
        this.f18573c = rVar;
        this.f18574d = bVar;
        this.f18575e = v0Var;
        this.f18576f = p0Var;
        this.j = fVar2;
        this.f18577g = g1Var;
    }

    @Override // com.google.android.play.core.assetpacks.AssetPackManager
    public final synchronized void a(AssetPackStateUpdateListener assetPackStateUpdateListener) {
        boolean z5;
        r rVar = this.f18573c;
        synchronized (rVar) {
            r.f18557c.e("registerListener", new Object[0]);
            if (assetPackStateUpdateListener == null) {
                throw new NullPointerException("Registered Asset Pack listener should not be null.");
            }
            rVar.a.add(assetPackStateUpdateListener);
        }
        p pVar = this.f18572b;
        synchronized (pVar) {
            z5 = pVar.f18915e != null;
        }
        synchronized (pVar) {
            pVar.a.e("registerListener", new Object[0]);
            pVar.f18914d.add(assetPackStateUpdateListener);
            pVar.a();
        }
        if (z5) {
            return;
        }
        ((Executor) this.j.a()).execute(new r1(this, 0));
    }

    @Override // com.google.android.play.core.assetpacks.AssetPackManager
    public final Task b(List list) {
        HashMap o6 = this.a.o();
        ArrayList arrayList = new ArrayList(list);
        if (!arrayList.isEmpty()) {
            return ((u1) this.f18579i.a()).a(arrayList, o6);
        }
        Bundle bundle = new Bundle();
        bundle.putInt(SharedPreferencesKey.SESSION_ID, 0);
        bundle.putInt("error_code", 0);
        Iterator it = list.iterator();
        while (it.hasNext()) {
            String str = (String) it.next();
            bundle.putInt(a5.k0.b("status", str), 4);
            bundle.putInt(a5.k0.b("error_code", str), 0);
            bundle.putLong(a5.k0.b("total_bytes_to_download", str), 0L);
            bundle.putLong(a5.k0.b("bytes_downloaded", str), 0L);
        }
        bundle.putStringArrayList("pack_names", new ArrayList<>(list));
        bundle.putLong("total_bytes_to_download", 0L);
        bundle.putLong("bytes_downloaded", 0L);
        return a5.k0.s(x.a(bundle, this.f18576f, this.f18577g));
    }

    @Override // com.google.android.play.core.assetpacks.AssetPackManager
    public final x c(List list) {
        v0 v0Var = this.f18575e;
        v0Var.getClass();
        Map map = (Map) v0Var.b(new e4.c(22, v0Var, list));
        HashMap hashMap = new HashMap();
        Iterator it = list.iterator();
        while (it.hasNext()) {
            String str = (String) it.next();
            Integer num = (Integer) map.get(str);
            hashMap.put(str, AssetPackState.a(str, num == null ? 0 : num.intValue(), 0, 0L, 0L, 0.0d, 0, "", ""));
        }
        ((u1) this.f18579i.a()).e(list);
        return new x(0L, hashMap);
    }

    @Override // com.google.android.play.core.assetpacks.AssetPackManager
    public final v d(String str) {
        PackageInfo packageInfo;
        HashSet hashSet;
        if (!this.f18578h) {
            ((Executor) this.j.a()).execute(new r1(this, 1));
            this.f18578h = true;
        }
        s sVar = this.a;
        sVar.getClass();
        try {
            if (sVar.m(str) != null) {
                try {
                    return sVar.i(str);
                } catch (IOException unused) {
                    return null;
                }
            }
        } catch (IOException unused2) {
        }
        uh.b bVar = this.f18574d;
        bVar.getClass();
        a5.m mVar = uh.b.f18903c;
        try {
            packageInfo = bVar.a.getPackageManager().getPackageInfo(bVar.f18904b, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        } catch (PackageManager.NameNotFoundException unused3) {
            mVar.b("App is not found in PackageManager", new Object[0]);
            packageInfo = null;
        }
        if (packageInfo == null || packageInfo.applicationInfo == null) {
            hashSet = new HashSet();
        } else {
            hashSet = new HashSet();
            Bundle bundle = packageInfo.applicationInfo.metaData;
            HashSet hashSet2 = new HashSet();
            if (bundle != null) {
                String string = bundle.getString("com.android.dynamic.apk.fused.modules");
                if (string == null || string.isEmpty()) {
                    mVar.a("App has no fused modules.", new Object[0]);
                } else {
                    Collections.addAll(hashSet2, string.split(",", -1));
                    hashSet2.remove("");
                    hashSet2.remove("base");
                }
            }
            String[] strArr = packageInfo.splitNames;
            if (strArr != null) {
                mVar.a("Adding splits from package manager: %s", Arrays.toString(strArr));
                Collections.addAll(hashSet2, strArr);
            } else {
                mVar.a("No splits are found or app cannot be found in package manager.", new Object[0]);
            }
            if (uh.a.a.get() != null) {
                throw new ClassCastException();
            }
            Iterator it = hashSet2.iterator();
            while (it.hasNext()) {
                String str2 = (String) it.next();
                if (!str2.startsWith("config.") && !str2.contains(".config.")) {
                    hashSet.add(str2);
                }
            }
        }
        if (hashSet.contains(str)) {
            return v.f18595d;
        }
        return null;
    }

    public final void e(boolean z5) {
        c4.d dVar;
        p pVar = this.f18572b;
        synchronized (pVar) {
            dVar = pVar.f18915e;
        }
        boolean z6 = dVar != null;
        synchronized (pVar) {
            pVar.f18916f = z5;
            pVar.a();
        }
        if (!z5 || z6) {
            return;
        }
        ((Executor) this.j.a()).execute(new r1(this, 0));
    }
}
