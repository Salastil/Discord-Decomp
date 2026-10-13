package ki;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.os.Bundle;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;
import ni.q;

/* loaded from: classes3.dex */
public final /* synthetic */ class c implements yi.a {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f13379b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Object f13380c;

    public /* synthetic */ c(int i5, Object obj, Object obj2) {
        this.a = i5;
        this.f13379b = obj;
        this.f13380c = obj2;
    }

    @Override // yi.a
    public final Object get() {
        ApplicationInfo applicationInfo;
        Bundle bundle;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f13379b;
                Context context = (Context) this.f13380c;
                String c6 = gVar.c();
                dj.a aVar = new dj.a();
                Context createDeviceProtectedStorageContext = context.createDeviceProtectedStorageContext();
                SharedPreferences sharedPreferences = createDeviceProtectedStorageContext.getSharedPreferences("com.google.firebase.common.prefs:" + c6, 0);
                boolean z5 = true;
                if (sharedPreferences.contains("firebase_data_collection_default_enabled")) {
                    z5 = sharedPreferences.getBoolean("firebase_data_collection_default_enabled", true);
                } else {
                    try {
                        PackageManager packageManager = createDeviceProtectedStorageContext.getPackageManager();
                        if (packageManager != null && (applicationInfo = packageManager.getApplicationInfo(createDeviceProtectedStorageContext.getPackageName(), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT)) != null && (bundle = applicationInfo.metaData) != null && bundle.containsKey("firebase_data_collection_default_enabled")) {
                            z5 = applicationInfo.metaData.getBoolean("firebase_data_collection_default_enabled");
                        }
                    } catch (PackageManager.NameNotFoundException unused) {
                    }
                }
                aVar.a = z5;
                return aVar;
            case 1:
                ni.f fVar = (ni.f) this.f13379b;
                ni.b bVar = (ni.b) this.f13380c;
                ni.e eVar = bVar.f15484f;
                am.f fVar2 = new am.f();
                HashSet hashSet = new HashSet();
                HashSet hashSet2 = new HashSet();
                HashSet hashSet3 = new HashSet();
                HashSet hashSet4 = new HashSet();
                HashSet hashSet5 = new HashSet();
                Set<ni.i> set = bVar.f15481c;
                Set set2 = bVar.f15485g;
                for (ni.i iVar : set) {
                    int i5 = iVar.f15498c;
                    int i6 = iVar.f15497b;
                    boolean z6 = i5 == 0;
                    q qVar = iVar.a;
                    if (z6) {
                        if (i6 == 2) {
                            hashSet4.add(qVar);
                        } else {
                            hashSet.add(qVar);
                        }
                    } else if (i5 == 2) {
                        hashSet3.add(qVar);
                    } else if (i6 == 2) {
                        hashSet5.add(qVar);
                    } else {
                        hashSet2.add(qVar);
                    }
                }
                if (!set2.isEmpty()) {
                    hashSet.add(q.a(vi.a.class));
                }
                fVar2.f675d = Collections.unmodifiableSet(hashSet);
                fVar2.f676e = Collections.unmodifiableSet(hashSet2);
                Collections.unmodifiableSet(hashSet3);
                fVar2.f677i = Collections.unmodifiableSet(hashSet4);
                fVar2.f678v = Collections.unmodifiableSet(hashSet5);
                fVar2.f679w = fVar;
                return eVar.g(fVar2);
            default:
                return new wi.g((Context) this.f13380c, (String) this.f13379b);
        }
    }

    public /* synthetic */ c(Context context, String str) {
        this.a = 2;
        this.f13380c = context;
        this.f13379b = str;
    }
}
