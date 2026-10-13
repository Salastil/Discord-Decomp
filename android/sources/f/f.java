package f;

import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.ActivityResultRegistry;
import androidx.activity.result.contract.ActivityResultContract;
import java.util.ArrayList;
import java.util.LinkedHashMap;

/* loaded from: classes.dex */
public final class f extends ActivityResultLauncher {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ActivityResultRegistry f8295b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ String f8296c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ ActivityResultContract f8297d;

    public /* synthetic */ f(ActivityResultRegistry activityResultRegistry, String str, ActivityResultContract activityResultContract, int i5) {
        this.a = i5;
        this.f8295b = activityResultRegistry;
        this.f8296c = str;
        this.f8297d = activityResultContract;
    }

    @Override // androidx.activity.result.ActivityResultLauncher
    public final void a(Object obj, x0.f fVar) {
        switch (this.a) {
            case 0:
                ActivityResultRegistry activityResultRegistry = this.f8295b;
                LinkedHashMap linkedHashMap = activityResultRegistry.f752b;
                ArrayList arrayList = activityResultRegistry.f754d;
                String str = this.f8296c;
                Object obj2 = linkedHashMap.get(str);
                ActivityResultContract activityResultContract = this.f8297d;
                if (obj2 == null) {
                    throw new IllegalStateException(("Attempting to launch an unregistered ActivityResultLauncher with contract " + activityResultContract + " and input " + obj + ". You must ensure the ActivityResultLauncher is registered before calling launch().").toString());
                }
                int intValue = ((Number) obj2).intValue();
                arrayList.add(str);
                try {
                    activityResultRegistry.b(intValue, activityResultContract, obj, fVar);
                    return;
                } catch (Exception e9) {
                    arrayList.remove(str);
                    throw e9;
                }
            default:
                ActivityResultRegistry activityResultRegistry2 = this.f8295b;
                ArrayList arrayList2 = activityResultRegistry2.f754d;
                LinkedHashMap linkedHashMap2 = activityResultRegistry2.f752b;
                String str2 = this.f8296c;
                Object obj3 = linkedHashMap2.get(str2);
                ActivityResultContract activityResultContract2 = this.f8297d;
                if (obj3 == null) {
                    throw new IllegalStateException(("Attempting to launch an unregistered ActivityResultLauncher with contract " + activityResultContract2 + " and input " + obj + ". You must ensure the ActivityResultLauncher is registered before calling launch().").toString());
                }
                int intValue2 = ((Number) obj3).intValue();
                arrayList2.add(str2);
                try {
                    activityResultRegistry2.b(intValue2, activityResultContract2, obj, fVar);
                    return;
                } catch (Exception e10) {
                    arrayList2.remove(str2);
                    throw e10;
                }
        }
    }

    @Override // androidx.activity.result.ActivityResultLauncher
    public final void b() {
        switch (this.a) {
            case 0:
                this.f8295b.f(this.f8296c);
                break;
            default:
                this.f8295b.f(this.f8296c);
                break;
        }
    }
}
