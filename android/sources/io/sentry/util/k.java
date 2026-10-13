package io.sentry.util;

import io.sentry.e0;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import java.util.regex.Pattern;

/* loaded from: classes3.dex */
public abstract class k {
    public static final ConcurrentHashMap a = new ConcurrentHashMap();

    public static boolean a(String str, List list) {
        Pattern pattern;
        if (str != null && list != null && !list.isEmpty()) {
            ConcurrentHashMap concurrentHashMap = a;
            if (concurrentHashMap.containsKey(str)) {
                return ((Boolean) concurrentHashMap.get(str)).booleanValue();
            }
            Iterator it = list.iterator();
            while (it.hasNext()) {
                if (((e0) it.next()).a.equalsIgnoreCase(str)) {
                    concurrentHashMap.put(str, Boolean.TRUE);
                    return true;
                }
            }
            Iterator it2 = list.iterator();
            while (it2.hasNext()) {
                try {
                    pattern = ((e0) it2.next()).f11529b;
                } catch (Throwable unused) {
                }
                if (pattern == null ? false : pattern.matcher(str).matches()) {
                    concurrentHashMap.put(str, Boolean.TRUE);
                    return true;
                }
                continue;
            }
            concurrentHashMap.put(str, Boolean.FALSE);
        }
        return false;
    }
}
