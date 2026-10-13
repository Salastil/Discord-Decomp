package ms;

import java.io.IOException;
import java.io.InputStream;
import java.lang.ref.Reference;
import java.lang.ref.ReferenceQueue;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Locale;
import java.util.Map;
import java.util.MissingResourceException;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class g {

    /* renamed from: e, reason: collision with root package name */
    public static final ConcurrentHashMap f14594e = new ConcurrentHashMap(32);

    /* renamed from: f, reason: collision with root package name */
    public static final ReferenceQueue f14595f = new ReferenceQueue();
    public final g a;

    /* renamed from: b, reason: collision with root package name */
    public final Map f14596b;

    /* renamed from: c, reason: collision with root package name */
    public final String f14597c;

    /* renamed from: d, reason: collision with root package name */
    public final Locale f14598d;

    public g(i iVar, String str, Locale locale) {
        int i5;
        this.a = null;
        this.f14597c = str;
        this.f14598d = locale;
        HashMap hashMap = new HashMap();
        while (true) {
            iVar.c();
            String readLine = iVar.f14603e.readLine();
            if (readLine == null) {
                this.f14596b = Collections.unmodifiableMap(hashMap);
                return;
            }
            String trim = readLine.trim();
            if (!trim.isEmpty() && trim.charAt(0) != '#') {
                int length = trim.length();
                int i6 = 0;
                while (true) {
                    if (i6 < length) {
                        if (trim.charAt(i6) == '=' && (i5 = i6 + 1) < length) {
                            hashMap.put(trim.substring(0, i6), trim.substring(i5));
                            break;
                        }
                        i6++;
                    } else {
                        break;
                    }
                }
            }
        }
    }

    public static LinkedList b(Locale locale) {
        String a = d.a(locale);
        String country = locale.getCountry();
        String variant = locale.getVariant();
        LinkedList linkedList = new LinkedList();
        if (!variant.isEmpty()) {
            linkedList.add(new Locale(a, country, variant));
        }
        if (!country.isEmpty()) {
            linkedList.add(new Locale(a, country, ""));
        }
        if (!a.isEmpty()) {
            linkedList.add(new Locale(a, "", ""));
            if (a.equals("nn")) {
                linkedList.add(new Locale("nb", "", ""));
            }
        }
        linkedList.add(Locale.ROOT);
        return linkedList;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static g d(String str, Locale locale) {
        ReferenceQueue referenceQueue;
        g gVar;
        if (str.isEmpty()) {
            throw new IllegalArgumentException("Base name must not be empty.");
        }
        if (locale == null) {
            throw new NullPointerException("Missing locale.");
        }
        f fVar = new f(str, locale);
        ConcurrentHashMap concurrentHashMap = f14594e;
        e eVar = (e) concurrentHashMap.get(fVar);
        if (eVar != null && (gVar = (g) eVar.get()) != null) {
            return gVar;
        }
        while (true) {
            referenceQueue = f14595f;
            Reference poll = referenceQueue.poll();
            if (poll == null) {
                break;
            }
            concurrentHashMap.remove(((e) poll).a);
        }
        ArrayList arrayList = new ArrayList();
        Iterator it = b(locale).iterator();
        while (it.hasNext()) {
            try {
                g e9 = e(str, (Locale) it.next());
                if (e9 != null) {
                    arrayList.add(e9);
                }
            } catch (IOException e10) {
                throw new IllegalStateException(e10);
            }
        }
        if (arrayList.isEmpty()) {
            throw new MissingResourceException("Cannot find resource bundle for: " + f(str, locale), g.class.getName(), "");
        }
        for (int size = arrayList.size() - 1; size >= 1; size--) {
            int i5 = size - 1;
            g gVar2 = (g) arrayList.get(i5);
            g gVar3 = (g) arrayList.get(size);
            gVar2.getClass();
            if (gVar3 != null) {
                gVar2 = new g(gVar2, gVar3);
            }
            arrayList.set(i5, gVar2);
        }
        g gVar4 = (g) arrayList.get(0);
        e eVar2 = new e(gVar4, referenceQueue);
        eVar2.a = fVar;
        concurrentHashMap.putIfAbsent(fVar, eVar2);
        return gVar4;
    }

    public static g e(String str, Locale locale) {
        int indexOf = str.indexOf(47);
        String substring = str.substring(0, indexOf);
        String f2 = f(str.substring(indexOf + 1), locale);
        is.c cVar = is.c.f12272b;
        InputStream b10 = cVar.b(cVar.c(substring, f2, g.class));
        i iVar = null;
        if (b10 == null) {
            try {
                b10 = is.c.a(g.class, f2);
            } catch (IOException unused) {
            }
        }
        if (b10 != null) {
            try {
                i iVar2 = new i(b10);
                try {
                    g gVar = new g(iVar2, str, locale);
                    iVar2.close();
                    return gVar;
                } catch (Throwable th2) {
                    th = th2;
                    iVar = iVar2;
                    if (iVar != null) {
                        iVar.close();
                    }
                    throw th;
                }
            } catch (Throwable th3) {
                th = th3;
            }
        }
        return null;
    }

    public static String f(String str, Locale locale) {
        String a = d.a(locale);
        String country = locale.getCountry();
        String variant = locale.getVariant();
        StringBuilder sb2 = new StringBuilder(str.length() + 20);
        sb2.append(str.replace('.', '/'));
        if (!a.isEmpty()) {
            sb2.append('_');
            sb2.append(a);
            if (!variant.isEmpty()) {
                sb2.append('_');
                sb2.append(country);
                sb2.append('_');
                sb2.append(variant);
            } else if (!country.isEmpty()) {
                sb2.append('_');
                sb2.append(country);
            }
        }
        sb2.append(".properties");
        return sb2.toString();
    }

    public final boolean a(String str) {
        if (str == null) {
            throw new NullPointerException("Missing resource key.");
        }
        g gVar = this;
        while (((String) gVar.f14596b.get(str)) == null) {
            gVar = gVar.a;
            if (gVar == null) {
                return false;
            }
        }
        return true;
    }

    public final String c(String str) {
        if (str == null) {
            throw new NullPointerException("Missing resource key.");
        }
        g gVar = this;
        do {
            String str2 = (String) gVar.f14596b.get(str);
            if (str2 != null) {
                return str2;
            }
            gVar = gVar.a;
        } while (gVar != null);
        throw new MissingResourceException("Cannot find property resource for: " + f(this.f14597c, this.f14598d) + "=>" + str, g.class.getName(), str);
    }

    public g(g gVar, g gVar2) {
        this.a = gVar2;
        this.f14597c = gVar.f14597c;
        this.f14598d = gVar.f14598d;
        this.f14596b = gVar.f14596b;
    }
}
