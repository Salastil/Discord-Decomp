package io.sentry.internal.modules;

import io.sentry.ILogger;
import io.sentry.SentryLevel;
import java.net.URL;
import java.util.ArrayList;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* loaded from: classes3.dex */
public final class c extends d {

    /* renamed from: e, reason: collision with root package name */
    public final Pattern f11628e;

    /* renamed from: f, reason: collision with root package name */
    public final Pattern f11629f;

    /* renamed from: g, reason: collision with root package name */
    public final ClassLoader f11630g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(ILogger iLogger) {
        super(iLogger);
        ClassLoader classLoader = c.class.getClassLoader();
        this.f11628e = Pattern.compile(".*/(.+)!/META-INF/MANIFEST.MF");
        this.f11629f = Pattern.compile("(.*?)-(\\d+\\.\\d+.*).jar");
        this.f11630g = ys.d.x(classLoader);
    }

    @Override // io.sentry.internal.modules.d
    public final Map b() {
        HashMap hashMap = new HashMap();
        ArrayList arrayList = new ArrayList();
        try {
            Enumeration<URL> resources = this.f11630g.getResources("META-INF/MANIFEST.MF");
            while (resources.hasMoreElements()) {
                Matcher matcher = this.f11628e.matcher(resources.nextElement().toString());
                b bVar = null;
                String group = (matcher.matches() && matcher.groupCount() == 1) ? matcher.group(1) : null;
                if (group != null) {
                    Matcher matcher2 = this.f11629f.matcher(group);
                    if (matcher2.matches() && matcher2.groupCount() == 2) {
                        bVar = new b(matcher2.group(1), matcher2.group(2));
                    }
                }
                if (bVar != null) {
                    arrayList.add(bVar);
                }
            }
        } catch (Throwable th2) {
            this.a.k(SentryLevel.ERROR, "Unable to detect modules via manifest files.", th2);
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            b bVar2 = (b) it.next();
            hashMap.put(bVar2.a, bVar2.f11627b);
        }
        return hashMap;
    }
}
