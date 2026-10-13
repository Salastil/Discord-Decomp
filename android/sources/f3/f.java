package f3;

import a5.r;
import a5.u;
import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.PorterDuff;
import android.os.PersistableBundle;
import android.text.TextUtils;
import androidx.core.app.Person;
import androidx.core.content.pm.ShortcutInfoCompat;
import androidx.core.graphics.drawable.IconCompat;
import com.google.android.gms.internal.play_billing.v0;
import ii.o;
import java.io.File;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ThreadPoolExecutor;
import o0.h;

/* loaded from: classes.dex */
public class f extends z0.c {

    /* renamed from: h, reason: collision with root package name */
    public static final Object f8318h = new Object();

    /* renamed from: i, reason: collision with root package name */
    public static volatile f f8319i;
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final s.e f8320b = new s.e(0);

    /* renamed from: c, reason: collision with root package name */
    public final s.e f8321c = new s.e(0);

    /* renamed from: d, reason: collision with root package name */
    public final ThreadPoolExecutor f8322d;

    /* renamed from: e, reason: collision with root package name */
    public final ThreadPoolExecutor f8323e;

    /* renamed from: f, reason: collision with root package name */
    public final File f8324f;

    /* renamed from: g, reason: collision with root package name */
    public final File f8325g;

    public f(Context context, ThreadPoolExecutor threadPoolExecutor, ThreadPoolExecutor threadPoolExecutor2) {
        this.a = context.getApplicationContext();
        this.f8322d = threadPoolExecutor;
        this.f8323e = threadPoolExecutor2;
        File file = new File(context.getFilesDir(), "ShortcutInfoCompatSaver_share_targets");
        this.f8325g = new File(file, "ShortcutInfoCompatSaver_share_targets_bitmaps");
        this.f8324f = new File(file, "targets.xml");
        threadPoolExecutor.submit(new v0(this, file, 9, false));
    }

    public static void f(File file) {
        if ((!file.exists() || file.isDirectory() || file.delete()) && !file.exists()) {
            file.mkdirs();
        }
    }

    @Override // z0.c
    public final Object a(List list) {
        ArrayList arrayList = new ArrayList(list.size());
        Iterator it = list.iterator();
        while (it.hasNext()) {
            ShortcutInfoCompat shortcutInfoCompat = (ShortcutInfoCompat) it.next();
            ShortcutInfoCompat shortcutInfoCompat2 = new ShortcutInfoCompat();
            shortcutInfoCompat2.a = shortcutInfoCompat.a;
            shortcutInfoCompat2.f1500b = shortcutInfoCompat.f1500b;
            Intent[] intentArr = shortcutInfoCompat.f1501c;
            shortcutInfoCompat2.f1501c = (Intent[]) Arrays.copyOf(intentArr, intentArr.length);
            shortcutInfoCompat2.f1502d = shortcutInfoCompat.f1502d;
            shortcutInfoCompat2.f1503e = shortcutInfoCompat.f1503e;
            shortcutInfoCompat2.f1504f = shortcutInfoCompat.f1504f;
            shortcutInfoCompat2.f1505g = shortcutInfoCompat.f1505g;
            shortcutInfoCompat2.f1506h = shortcutInfoCompat.f1506h;
            shortcutInfoCompat2.k = shortcutInfoCompat.k;
            shortcutInfoCompat2.f1508l = shortcutInfoCompat.f1508l;
            shortcutInfoCompat2.f1509m = shortcutInfoCompat.f1509m;
            Person[] personArr = shortcutInfoCompat.f1507i;
            if (personArr != null) {
                shortcutInfoCompat2.f1507i = (Person[]) Arrays.copyOf(personArr, personArr.length);
            }
            if (shortcutInfoCompat.j != null) {
                shortcutInfoCompat2.j = new HashSet(shortcutInfoCompat.j);
            }
            PersistableBundle persistableBundle = shortcutInfoCompat.f1510n;
            if (persistableBundle != null) {
                shortcutInfoCompat2.f1510n = persistableBundle;
            }
            if (TextUtils.isEmpty(shortcutInfoCompat2.f1503e)) {
                throw new IllegalArgumentException("Shortcut must have a non-empty label");
            }
            Intent[] intentArr2 = shortcutInfoCompat2.f1501c;
            if (intentArr2 == null || intentArr2.length == 0) {
                throw new IllegalArgumentException("Shortcut must have an intent");
            }
            arrayList.add(shortcutInfoCompat2);
        }
        h hVar = new h();
        this.f8322d.submit(new e(this, arrayList, hVar, 1));
        return hVar;
    }

    @Override // z0.c
    public final List b() {
        return (List) this.f8322d.submit(new u(1, this)).get();
    }

    @Override // z0.c
    public final Object c() {
        h hVar = new h();
        this.f8322d.submit(new o(this, hVar, 9, false));
        return hVar;
    }

    @Override // z0.c
    public final Object d(List list) {
        ArrayList arrayList = new ArrayList(list);
        h hVar = new h();
        this.f8322d.submit(new e(this, arrayList, hVar, 0));
        return hVar;
    }

    public final void e(ArrayList arrayList) {
        ArrayList arrayList2 = new ArrayList();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            g gVar = (g) it.next();
            if (!TextUtils.isEmpty(gVar.f8326b)) {
                arrayList2.add(gVar.f8326b);
            }
        }
        for (File file : this.f8325g.listFiles()) {
            if (!arrayList2.contains(file.getAbsolutePath())) {
                file.delete();
            }
        }
    }

    public final IconCompat g(String str) {
        int i5;
        Context context = this.a;
        g gVar = (g) this.f8322d.submit(new r(this, str, 1)).get();
        if (gVar == null) {
            return null;
        }
        String str2 = gVar.a;
        if (!TextUtils.isEmpty(str2)) {
            try {
                i5 = context.getResources().getIdentifier(str2, null, null);
            } catch (Exception unused) {
                i5 = 0;
            }
            if (i5 != 0) {
                PorterDuff.Mode mode = IconCompat.k;
                context.getClass();
                return IconCompat.d(context.getResources(), context.getPackageName(), i5);
            }
        }
        if (TextUtils.isEmpty(gVar.f8326b)) {
            return null;
        }
        Bitmap bitmap = (Bitmap) this.f8323e.submit(new u(2, gVar)).get();
        if (bitmap != null) {
            return IconCompat.c(bitmap);
        }
        return null;
    }

    public final void h(h hVar) {
        v0 v0Var = new v0(this, new ArrayList(this.f8320b.values()), 8, false);
        h hVar2 = new h();
        this.f8323e.submit(new v0(10, hVar2, v0Var));
        hVar2.a(new o(8, hVar2, hVar), this.f8322d);
    }
}
