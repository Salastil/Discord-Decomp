package androidx.fragment.app;

import android.util.Log;
import androidx.activity.result.ActivityResultCallback;
import java.util.ArrayList;
import java.util.Map;

/* loaded from: classes.dex */
public final class r0 implements ActivityResultCallback {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2095d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ FragmentManager f2096e;

    public /* synthetic */ r0(FragmentManager fragmentManager, int i5) {
        this.f2095d = i5;
        this.f2096e = fragmentManager;
    }

    @Override // androidx.activity.result.ActivityResultCallback
    public final void f(Object obj) {
        switch (this.f2095d) {
            case 0:
                Map map = (Map) obj;
                String[] strArr = (String[]) map.keySet().toArray(new String[0]);
                ArrayList arrayList = new ArrayList(map.values());
                int[] iArr = new int[arrayList.size()];
                for (int i5 = 0; i5 < arrayList.size(); i5++) {
                    iArr[i5] = ((Boolean) arrayList.get(i5)).booleanValue() ? 0 : -1;
                }
                FragmentManager fragmentManager = this.f2096e;
                y0 y0Var = (y0) fragmentManager.F.pollFirst();
                if (y0Var == null) {
                    Log.w("FragmentManager", "No permissions were requested for " + this);
                    break;
                } else {
                    String str = y0Var.f2122d;
                    int i6 = y0Var.f2123e;
                    Fragment c6 = fragmentManager.f1915c.c(str);
                    if (c6 == null) {
                        Log.w("FragmentManager", "Permission request result delivered for unknown Fragment " + str);
                        break;
                    } else {
                        c6.onRequestPermissionsResult(i6, strArr, iArr);
                        break;
                    }
                }
            case 1:
                f.a aVar = (f.a) obj;
                FragmentManager fragmentManager2 = this.f2096e;
                y0 y0Var2 = (y0) fragmentManager2.F.pollLast();
                if (y0Var2 == null) {
                    Log.w("FragmentManager", "No Activities were started for result for " + this);
                    break;
                } else {
                    String str2 = y0Var2.f2122d;
                    int i10 = y0Var2.f2123e;
                    Fragment c8 = fragmentManager2.f1915c.c(str2);
                    if (c8 == null) {
                        Log.w("FragmentManager", "Activity result delivered for unknown Fragment " + str2);
                        break;
                    } else {
                        c8.onActivityResult(i10, aVar.f8286d, aVar.f8287e);
                        break;
                    }
                }
            default:
                f.a aVar2 = (f.a) obj;
                FragmentManager fragmentManager3 = this.f2096e;
                y0 y0Var3 = (y0) fragmentManager3.F.pollFirst();
                if (y0Var3 == null) {
                    Log.w("FragmentManager", "No IntentSenders were started for " + this);
                    break;
                } else {
                    String str3 = y0Var3.f2122d;
                    int i11 = y0Var3.f2123e;
                    Fragment c10 = fragmentManager3.f1915c.c(str3);
                    if (c10 == null) {
                        Log.w("FragmentManager", "Intent Sender result delivered for unknown Fragment " + str3);
                        break;
                    } else {
                        c10.onActivityResult(i11, aVar2.f8286d, aVar2.f8287e);
                        break;
                    }
                }
        }
    }
}
