package io.sentry.android.core;

/* loaded from: classes3.dex */
public enum x0 {
    SENTRY_HANDLER_STRATEGY_DEFAULT(0),
    SENTRY_HANDLER_STRATEGY_CHAIN_AT_START(1);

    private final int value;

    x0(int i5) {
        this.value = i5;
    }

    public int getValue() {
        return this.value;
    }
}
