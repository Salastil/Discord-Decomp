package androidx.sharetarget;

import android.content.ComponentName;
import android.content.Context;
import android.content.IntentFilter;
import android.os.Bundle;
import android.service.chooser.ChooserTarget;
import android.service.chooser.ChooserTargetService;
import android.util.Log;
import androidx.core.content.pm.ShortcutInfoCompat;
import androidx.core.graphics.drawable.IconCompat;
import f3.a;
import f3.b;
import f3.c;
import f3.d;
import f3.f;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* loaded from: classes.dex */
public class ChooserTargetServiceCompat extends ChooserTargetService {
    @Override // android.service.chooser.ChooserTargetService
    public final List onGetChooserTargets(ComponentName componentName, IntentFilter intentFilter) {
        IconCompat iconCompat;
        Context applicationContext = getApplicationContext();
        if (d.a == null) {
            synchronized (d.f8313b) {
                try {
                    if (d.a == null) {
                        d.a = d.e(applicationContext);
                    }
                } finally {
                }
            }
        }
        ArrayList arrayList = d.a;
        ArrayList arrayList2 = new ArrayList();
        Iterator it = arrayList.iterator();
        while (true) {
            int i5 = 0;
            if (!it.hasNext()) {
                break;
            }
            c cVar = (c) it.next();
            if (cVar.f8311b.equals(componentName.getClassName())) {
                b[] bVarArr = cVar.a;
                int length = bVarArr.length;
                while (true) {
                    if (i5 >= length) {
                        break;
                    }
                    if (intentFilter.hasDataType(bVarArr[i5].a)) {
                        arrayList2.add(cVar);
                        break;
                    }
                    i5++;
                }
            }
        }
        if (arrayList2.isEmpty()) {
            return Collections.EMPTY_LIST;
        }
        if (f.f8319i == null) {
            synchronized (f.f8318h) {
                try {
                    if (f.f8319i == null) {
                        TimeUnit timeUnit = TimeUnit.SECONDS;
                        f.f8319i = new f(applicationContext, new ThreadPoolExecutor(0, 1, 20L, timeUnit, new LinkedBlockingQueue()), new ThreadPoolExecutor(0, 1, 20L, timeUnit, new LinkedBlockingQueue()));
                    }
                } finally {
                }
            }
        }
        f fVar = f.f8319i;
        try {
            List<ShortcutInfoCompat> b10 = fVar.b();
            if (b10 == null || b10.isEmpty()) {
                return Collections.EMPTY_LIST;
            }
            ArrayList arrayList3 = new ArrayList();
            for (ShortcutInfoCompat shortcutInfoCompat : b10) {
                Iterator it2 = arrayList2.iterator();
                while (true) {
                    if (it2.hasNext()) {
                        c cVar2 = (c) it2.next();
                        if (shortcutInfoCompat.j.containsAll(Arrays.asList(cVar2.f8312c))) {
                            arrayList3.add(new a(shortcutInfoCompat, new ComponentName(applicationContext.getPackageName(), cVar2.f8311b)));
                            break;
                        }
                    }
                }
            }
            if (arrayList3.isEmpty()) {
                return new ArrayList();
            }
            Collections.sort(arrayList3);
            ArrayList arrayList4 = new ArrayList();
            int i6 = ((a) arrayList3.get(0)).f8309d.f1509m;
            Iterator it3 = arrayList3.iterator();
            float f2 = 1.0f;
            int i10 = i6;
            while (it3.hasNext()) {
                a aVar = (a) it3.next();
                ShortcutInfoCompat shortcutInfoCompat2 = aVar.f8309d;
                try {
                    iconCompat = fVar.g(shortcutInfoCompat2.f1500b);
                } catch (Exception e9) {
                    Log.e("ChooserServiceCompat", "Failed to retrieve shortcut icon: ", e9);
                    iconCompat = null;
                }
                Bundle bundle = new Bundle();
                bundle.putString("android.intent.extra.shortcut.ID", shortcutInfoCompat2.f1500b);
                int i11 = shortcutInfoCompat2.f1509m;
                if (i10 != i11) {
                    f2 -= 0.01f;
                    i10 = i11;
                }
                float f10 = f2;
                arrayList4.add(new ChooserTarget(shortcutInfoCompat2.f1503e, iconCompat != null ? iconCompat.i(null) : null, f10, aVar.f8310e, bundle));
                f2 = f10;
            }
            return arrayList4;
        } catch (Exception e10) {
            Log.e("ChooserServiceCompat", "Failed to retrieve shortcuts: ", e10);
            return Collections.EMPTY_LIST;
        }
    }
}
