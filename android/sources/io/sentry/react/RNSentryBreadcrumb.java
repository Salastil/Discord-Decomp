package io.sentry.react;

import com.facebook.react.bridge.ReadableMap;
import io.sentry.Breadcrumb;
import io.sentry.SentryLevel;
import java.util.Map;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class RNSentryBreadcrumb {
    private RNSentryBreadcrumb() {
        throw new AssertionError("Utility class should not be instantiated");
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @NotNull
    public static Breadcrumb fromMap(ReadableMap readableMap) {
        Breadcrumb breadcrumb = new Breadcrumb();
        if (readableMap.hasKey("message")) {
            breadcrumb.f10975v = readableMap.getString("message");
        }
        if (readableMap.hasKey("type")) {
            breadcrumb.f10976w = readableMap.getString("type");
        }
        if (readableMap.hasKey("category")) {
            breadcrumb.f10978y = readableMap.getString("category");
        }
        if (readableMap.hasKey("origin")) {
            breadcrumb.E = readableMap.getString("origin");
        } else {
            breadcrumb.E = "react-native";
        }
        if (readableMap.hasKey("level")) {
            String string = readableMap.getString("level");
            switch (string.hashCode()) {
                case 3237038:
                    string.equals("info");
                    breadcrumb.F = SentryLevel.INFO;
                    break;
                case 95458899:
                    if (string.equals("debug")) {
                        breadcrumb.F = SentryLevel.DEBUG;
                        break;
                    }
                    breadcrumb.F = SentryLevel.INFO;
                    break;
                case 96784904:
                    if (string.equals("error")) {
                        breadcrumb.F = SentryLevel.ERROR;
                        break;
                    }
                    breadcrumb.F = SentryLevel.INFO;
                    break;
                case 97203460:
                    if (string.equals("fatal")) {
                        breadcrumb.F = SentryLevel.FATAL;
                        break;
                    }
                    breadcrumb.F = SentryLevel.INFO;
                    break;
                case 1124446108:
                    if (string.equals("warning")) {
                        breadcrumb.F = SentryLevel.WARNING;
                        break;
                    }
                    breadcrumb.F = SentryLevel.INFO;
                    break;
                default:
                    breadcrumb.F = SentryLevel.INFO;
                    break;
            }
        }
        if (readableMap.hasKey("data")) {
            for (Map.Entry<String, Object> entry : readableMap.getMap("data").toHashMap().entrySet()) {
                if (entry.getValue() != null) {
                    breadcrumb.c(entry.getValue(), entry.getKey());
                }
            }
        }
        return breadcrumb;
    }

    public static String getCurrentScreenFrom(ReadableMap readableMap) {
        String string = readableMap.hasKey("category") ? readableMap.getString("category") : null;
        if (string != null && "navigation".equals(string)) {
            ReadableMap map = readableMap.hasKey("data") ? readableMap.getMap("data") : null;
            if (map == null) {
                return null;
            }
            try {
                if (map.hasKey("to")) {
                    return map.getString("to");
                }
            } catch (Throwable unused) {
            }
        }
        return null;
    }
}
