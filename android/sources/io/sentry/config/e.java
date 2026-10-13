package io.sentry.config;

import io.sentry.util.l;
import java.util.HashMap;
import java.util.Map;
import java.util.Properties;

/* loaded from: classes3.dex */
public final class e implements d {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Properties f11470b;

    public e(String str, Properties properties) {
        this.a = str;
        d9.a.L(properties, "properties are required");
        this.f11470b = properties;
    }

    @Override // io.sentry.config.d
    public final Map c() {
        String j = com.discord.chat.bridge.botuikit.a.j(new StringBuilder(), this.a, "tags.");
        HashMap hashMap = new HashMap();
        for (Map.Entry entry : this.f11470b.entrySet()) {
            if ((entry.getKey() instanceof String) && (entry.getValue() instanceof String)) {
                String str = (String) entry.getKey();
                if (str.startsWith(j)) {
                    hashMap.put(str.substring(j.length()), l.b((String) entry.getValue()));
                }
            }
        }
        return hashMap;
    }

    @Override // io.sentry.config.d
    public final String getProperty(String str) {
        return l.b(this.f11470b.getProperty(this.a + str));
    }

    public e(Properties properties) {
        this("", properties);
    }
}
