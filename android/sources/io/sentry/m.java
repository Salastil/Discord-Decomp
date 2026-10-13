package io.sentry;

import io.sentry.android.core.SentryAndroidOptions;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.WeakHashMap;

/* loaded from: classes3.dex */
public final class m implements b0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11664d;

    /* renamed from: e, reason: collision with root package name */
    public final Map f11665e;

    /* renamed from: i, reason: collision with root package name */
    public final v5 f11666i;

    public m(v5 v5Var) {
        this.f11664d = 1;
        this.f11665e = Collections.synchronizedMap(new WeakHashMap());
        this.f11666i = v5Var;
    }

    @Override // io.sentry.b0
    public final SentryEvent f(SentryEvent sentryEvent, Hint hint) {
        io.sentry.protocol.u e9;
        String str;
        Long l6;
        switch (this.f11664d) {
            case 0:
                if (r6.class.isInstance(hint.b("sentry:typeCheckHint")) && (e9 = sentryEvent.e()) != null && (str = e9.f11888d) != null && (l6 = e9.f11891v) != null) {
                    Map map = this.f11665e;
                    Long l7 = (Long) map.get(str);
                    if (l7 != null && !l7.equals(l6)) {
                        this.f11666i.getLogger().u(SentryLevel.INFO, "Event %s has been dropped due to multi-threaded deduplication", sentryEvent.f11543d);
                        hint.d(io.sentry.hints.e.MULTITHREADED_DEDUPLICATION, "sentry:eventDropReason");
                        break;
                    } else {
                        map.put(str, l6);
                        break;
                    }
                }
                break;
            default:
                v5 v5Var = this.f11666i;
                if (v5Var.isEnableDeduplication()) {
                    Throwable a = sentryEvent.a();
                    if (a != null) {
                        Map map2 = this.f11665e;
                        if (!map2.containsKey(a)) {
                            ArrayList arrayList = new ArrayList();
                            for (Throwable th2 = a; th2.getCause() != null; th2 = th2.getCause()) {
                                arrayList.add(th2.getCause());
                            }
                            Iterator it = arrayList.iterator();
                            while (it.hasNext()) {
                                if (map2.containsKey(it.next())) {
                                }
                            }
                            map2.put(a, null);
                            break;
                        }
                        v5Var.getLogger().u(SentryLevel.DEBUG, "Duplicate Exception detected. Event %s will be discarded.", sentryEvent.f11543d);
                        break;
                    }
                } else {
                    v5Var.getLogger().u(SentryLevel.DEBUG, "Event deduplication is disabled.", new Object[0]);
                    break;
                }
                break;
        }
        return sentryEvent;
    }

    public m(SentryAndroidOptions sentryAndroidOptions) {
        this.f11664d = 0;
        this.f11665e = Collections.synchronizedMap(new HashMap());
        this.f11666i = sentryAndroidOptions;
    }
}
