package f3;

import a5.s;
import android.content.Intent;
import android.graphics.Bitmap;
import android.os.PersistableBundle;
import android.text.TextUtils;
import androidx.core.app.Person;
import androidx.core.content.pm.ShortcutInfoCompat;
import androidx.core.graphics.drawable.IconCompat;
import com.google.android.gms.internal.play_billing.v0;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.File;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;
import java.util.UUID;
import o0.h;

/* loaded from: classes.dex */
public final class e implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8314d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ArrayList f8315e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ h f8316i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ f f8317v;

    public /* synthetic */ e(f fVar, ArrayList arrayList, h hVar, int i5) {
        this.f8314d = i5;
        this.f8317v = fVar;
        this.f8315e = arrayList;
        this.f8316i = hVar;
    }

    /* JADX WARN: Code restructure failed: missing block: B:21:0x003b, code lost:
    
        if (r5 != 5) goto L26;
     */
    /* JADX WARN: Removed duplicated region for block: B:25:0x00a2  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x00af  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00bc  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x00c8  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0123 A[SYNTHETIC] */
    @Override // java.lang.Runnable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void run() {
        String str;
        String str2;
        ShortcutInfoCompat shortcutInfoCompat;
        Person[] personArr;
        PersistableBundle persistableBundle;
        switch (this.f8314d) {
            case 0:
                Iterator it = this.f8315e.iterator();
                while (true) {
                    boolean hasNext = it.hasNext();
                    f fVar = this.f8317v;
                    if (!hasNext) {
                        fVar.h(this.f8316i);
                        return;
                    }
                    String str3 = (String) it.next();
                    fVar.f8320b.remove(str3);
                    ListenableFuture listenableFuture = (ListenableFuture) fVar.f8321c.remove(str3);
                    if (listenableFuture != null) {
                        listenableFuture.cancel(false);
                    }
                }
            default:
                Iterator it2 = this.f8315e.iterator();
                while (true) {
                    boolean hasNext2 = it2.hasNext();
                    f fVar2 = this.f8317v;
                    if (!hasNext2) {
                        fVar2.h(this.f8316i);
                        return;
                    }
                    ShortcutInfoCompat shortcutInfoCompat2 = (ShortcutInfoCompat) it2.next();
                    Set set = shortcutInfoCompat2.j;
                    if (set != null) {
                        if (set.isEmpty()) {
                            continue;
                        } else {
                            IconCompat iconCompat = shortcutInfoCompat2.f1506h;
                            if (iconCompat != null) {
                                int i5 = iconCompat.a;
                                if (i5 == -1) {
                                    i5 = ki.b.G(iconCompat.f1515b);
                                }
                                if (i5 != 1) {
                                    if (i5 != 2) {
                                        break;
                                    } else {
                                        str = fVar2.a.getResources().getResourceName(iconCompat.f());
                                        str2 = null;
                                        shortcutInfoCompat = new ShortcutInfoCompat();
                                        shortcutInfoCompat.a = shortcutInfoCompat2.a;
                                        shortcutInfoCompat.f1500b = shortcutInfoCompat2.f1500b;
                                        Intent[] intentArr = shortcutInfoCompat2.f1501c;
                                        shortcutInfoCompat.f1501c = (Intent[]) Arrays.copyOf(intentArr, intentArr.length);
                                        shortcutInfoCompat.f1502d = shortcutInfoCompat2.f1502d;
                                        shortcutInfoCompat.f1503e = shortcutInfoCompat2.f1503e;
                                        shortcutInfoCompat.f1504f = shortcutInfoCompat2.f1504f;
                                        shortcutInfoCompat.f1505g = shortcutInfoCompat2.f1505g;
                                        shortcutInfoCompat.f1506h = shortcutInfoCompat2.f1506h;
                                        shortcutInfoCompat.k = shortcutInfoCompat2.k;
                                        shortcutInfoCompat.f1508l = shortcutInfoCompat2.f1508l;
                                        shortcutInfoCompat.f1509m = shortcutInfoCompat2.f1509m;
                                        personArr = shortcutInfoCompat2.f1507i;
                                        if (personArr != null) {
                                            shortcutInfoCompat.f1507i = (Person[]) Arrays.copyOf(personArr, personArr.length);
                                        }
                                        if (shortcutInfoCompat2.j != null) {
                                            shortcutInfoCompat.j = new HashSet(shortcutInfoCompat2.j);
                                        }
                                        persistableBundle = shortcutInfoCompat2.f1510n;
                                        if (persistableBundle != null) {
                                            shortcutInfoCompat.f1510n = persistableBundle;
                                        }
                                        shortcutInfoCompat.f1506h = null;
                                        if (TextUtils.isEmpty(shortcutInfoCompat.f1503e)) {
                                            throw new IllegalArgumentException("Shortcut must have a non-empty label");
                                        }
                                        Intent[] intentArr2 = shortcutInfoCompat.f1501c;
                                        if (intentArr2 != null && intentArr2.length != 0) {
                                            g gVar = new g(shortcutInfoCompat, str, str2);
                                            Bitmap e9 = str2 != null ? shortcutInfoCompat2.f1506h.e() : null;
                                            String str4 = shortcutInfoCompat2.f1500b;
                                            fVar2.f8320b.put(str4, gVar);
                                            if (e9 != null) {
                                                s sVar = new s(fVar2, e9, str2, 6, false);
                                                h hVar = new h();
                                                fVar2.f8323e.submit(new v0(10, hVar, sVar));
                                                ListenableFuture listenableFuture2 = (ListenableFuture) fVar2.f8321c.put(str4, hVar);
                                                if (listenableFuture2 != null) {
                                                    listenableFuture2.cancel(false);
                                                }
                                                hVar.a(new s(this, str4, hVar, 5, false), fVar2.f8322d);
                                            }
                                        }
                                    }
                                }
                                str2 = new File(fVar2.f8325g, UUID.randomUUID().toString()).getAbsolutePath();
                                str = null;
                                shortcutInfoCompat = new ShortcutInfoCompat();
                                shortcutInfoCompat.a = shortcutInfoCompat2.a;
                                shortcutInfoCompat.f1500b = shortcutInfoCompat2.f1500b;
                                Intent[] intentArr3 = shortcutInfoCompat2.f1501c;
                                shortcutInfoCompat.f1501c = (Intent[]) Arrays.copyOf(intentArr3, intentArr3.length);
                                shortcutInfoCompat.f1502d = shortcutInfoCompat2.f1502d;
                                shortcutInfoCompat.f1503e = shortcutInfoCompat2.f1503e;
                                shortcutInfoCompat.f1504f = shortcutInfoCompat2.f1504f;
                                shortcutInfoCompat.f1505g = shortcutInfoCompat2.f1505g;
                                shortcutInfoCompat.f1506h = shortcutInfoCompat2.f1506h;
                                shortcutInfoCompat.k = shortcutInfoCompat2.k;
                                shortcutInfoCompat.f1508l = shortcutInfoCompat2.f1508l;
                                shortcutInfoCompat.f1509m = shortcutInfoCompat2.f1509m;
                                personArr = shortcutInfoCompat2.f1507i;
                                if (personArr != null) {
                                }
                                if (shortcutInfoCompat2.j != null) {
                                }
                                persistableBundle = shortcutInfoCompat2.f1510n;
                                if (persistableBundle != null) {
                                }
                                shortcutInfoCompat.f1506h = null;
                                if (TextUtils.isEmpty(shortcutInfoCompat.f1503e)) {
                                }
                            }
                            str = null;
                            str2 = null;
                            shortcutInfoCompat = new ShortcutInfoCompat();
                            shortcutInfoCompat.a = shortcutInfoCompat2.a;
                            shortcutInfoCompat.f1500b = shortcutInfoCompat2.f1500b;
                            Intent[] intentArr32 = shortcutInfoCompat2.f1501c;
                            shortcutInfoCompat.f1501c = (Intent[]) Arrays.copyOf(intentArr32, intentArr32.length);
                            shortcutInfoCompat.f1502d = shortcutInfoCompat2.f1502d;
                            shortcutInfoCompat.f1503e = shortcutInfoCompat2.f1503e;
                            shortcutInfoCompat.f1504f = shortcutInfoCompat2.f1504f;
                            shortcutInfoCompat.f1505g = shortcutInfoCompat2.f1505g;
                            shortcutInfoCompat.f1506h = shortcutInfoCompat2.f1506h;
                            shortcutInfoCompat.k = shortcutInfoCompat2.k;
                            shortcutInfoCompat.f1508l = shortcutInfoCompat2.f1508l;
                            shortcutInfoCompat.f1509m = shortcutInfoCompat2.f1509m;
                            personArr = shortcutInfoCompat2.f1507i;
                            if (personArr != null) {
                            }
                            if (shortcutInfoCompat2.j != null) {
                            }
                            persistableBundle = shortcutInfoCompat2.f1510n;
                            if (persistableBundle != null) {
                            }
                            shortcutInfoCompat.f1506h = null;
                            if (TextUtils.isEmpty(shortcutInfoCompat.f1503e)) {
                            }
                        }
                    }
                }
                throw new IllegalArgumentException("Shortcut must have an intent");
        }
    }
}
