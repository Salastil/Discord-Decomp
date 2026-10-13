package net.time4j.android.spi;

import android.content.Context;
import hs.f;
import is.c;
import java.io.IOException;
import java.io.InputStream;
import java.net.URI;
import java.net.URISyntaxException;
import java.net.URL;
import java.net.URLConnection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.ServiceLoader;
import java.util.Set;
import js.b;
import ls.a0;
import ls.e;
import ls.h;
import ls.h0;
import ls.r0;
import ls.s0;
import ms.j;
import net.time4j.tz.o;
import net.time4j.tz.p;
import ns.a;
import ns.d;

/* loaded from: classes3.dex */
public class AndroidResourceLoader extends c {

    /* renamed from: f, reason: collision with root package name */
    public static final Map f15219f;

    /* renamed from: g, reason: collision with root package name */
    public static final Set f15220g;

    /* renamed from: d, reason: collision with root package name */
    public Context f15221d = null;

    /* renamed from: e, reason: collision with root package name */
    public List f15222e = Collections.EMPTY_LIST;

    static {
        HashMap hashMap = new HashMap();
        hashMap.put(h0.class, new hs.c(4));
        hashMap.put(o.class, new hs.c(7));
        hashMap.put(p.class, new hs.c(6));
        hashMap.put(a.class, new hs.c(1));
        hashMap.put(b.class, new hs.c(0));
        hashMap.put(h.class, new hs.c(2));
        hashMap.put(a0.class, new hs.c(3));
        hashMap.put(r0.class, Collections.singleton(new j()));
        hashMap.put(s0.class, new hs.c(5));
        hashMap.put(d.class, Collections.singleton(new f()));
        f15219f = Collections.unmodifiableMap(hashMap);
        HashSet hashSet = new HashSet();
        hashSet.add("i18n");
        hashSet.add("calendar");
        hashSet.add("olson");
        hashSet.add("tzdata");
        f15220g = Collections.unmodifiableSet(hashSet);
    }

    @Override // is.c
    public final InputStream b(URI uri) {
        if (uri == null) {
            return null;
        }
        try {
            if (uri.isAbsolute()) {
                URLConnection openConnection = uri.toURL().openConnection();
                openConnection.setUseCaches(false);
                return openConnection.getInputStream();
            }
            Context context = this.f15221d;
            if (context != null) {
                return context.getAssets().open(uri.toString());
            }
            throw new IllegalStateException("'ApplicationStarter.initialize(context)' must be called first at app start.");
        } catch (IOException | RuntimeException unused) {
            return null;
        }
    }

    @Override // is.c
    public final URI c(String str, String str2, Class cls) {
        try {
            if (!f15220g.contains(str)) {
                URL resource = cls.getClassLoader().getResource(str2);
                if (resource != null) {
                    return resource.toURI();
                }
                return null;
            }
            return new URI("net/time4j/" + str + '/' + str2);
        } catch (URISyntaxException unused) {
            return null;
        }
    }

    @Override // is.c
    public final Iterable d(Class cls) {
        Iterable iterable = (Iterable) f15219f.get(cls);
        if (iterable == null) {
            if (cls != e.class) {
                return ServiceLoader.load(cls, cls.getClassLoader());
            }
            iterable = this.f15222e;
        }
        return iterable;
    }
}
