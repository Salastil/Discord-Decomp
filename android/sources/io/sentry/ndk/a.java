package io.sentry.ndk;

/* loaded from: classes3.dex */
public enum a {
    SENTRY_HANDLER_STRATEGY_DEFAULT(0),
    SENTRY_HANDLER_STRATEGY_CHAIN_AT_START(1);

    private final int value;

    a(int i5) {
        this.value = i5;
    }

    public int getValue() {
        return this.value;
    }
}
