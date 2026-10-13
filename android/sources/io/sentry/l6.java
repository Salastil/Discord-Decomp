package io.sentry;

import com.facebook.react.common.assets.ReactFontManager;
import java.util.Locale;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public enum l6 implements y1 {
    OK(0, 399),
    CANCELLED(499),
    INTERNAL_ERROR(500),
    UNKNOWN(500),
    UNKNOWN_ERROR(500),
    INVALID_ARGUMENT(ReactFontManager.TypefaceStyle.NORMAL),
    DEADLINE_EXCEEDED(504),
    NOT_FOUND(404),
    ALREADY_EXISTS(409),
    PERMISSION_DENIED(403),
    RESOURCE_EXHAUSTED(429),
    FAILED_PRECONDITION(ReactFontManager.TypefaceStyle.NORMAL),
    ABORTED(409),
    OUT_OF_RANGE(ReactFontManager.TypefaceStyle.NORMAL),
    UNIMPLEMENTED(501),
    UNAVAILABLE(503),
    DATA_LOSS(500),
    UNAUTHENTICATED(401);

    private final int maxHttpStatusCode;
    private final int minHttpStatusCode;

    l6(int i5) {
        this.minHttpStatusCode = i5;
        this.maxHttpStatusCode = i5;
    }

    public static l6 fromApiNameSafely(String str) {
        if (str == null) {
            return null;
        }
        try {
            return valueOf(str.toUpperCase(Locale.ROOT));
        } catch (IllegalArgumentException unused) {
            return null;
        }
    }

    public static l6 fromHttpStatusCode(int i5) {
        for (l6 l6Var : values()) {
            if (l6Var.matches(i5)) {
                return l6Var;
            }
        }
        return null;
    }

    private boolean matches(int i5) {
        return i5 >= this.minHttpStatusCode && i5 <= this.maxHttpStatusCode;
    }

    @NotNull
    public String apiName() {
        return name().toLowerCase(Locale.ROOT);
    }

    @Override // io.sentry.y1
    public void serialize(@NotNull y2 y2Var, @NotNull ILogger iLogger) {
        y2Var.s(apiName());
    }

    @NotNull
    public static l6 fromHttpStatusCode(Integer num, @NotNull l6 l6Var) {
        l6 fromHttpStatusCode = num != null ? fromHttpStatusCode(num.intValue()) : l6Var;
        return fromHttpStatusCode != null ? fromHttpStatusCode : l6Var;
    }

    l6(int i5, int i6) {
        this.minHttpStatusCode = i5;
        this.maxHttpStatusCode = i6;
    }
}
