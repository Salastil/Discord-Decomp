package io.sentry;

import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public enum v4 implements y1 {
    Session("session"),
    Event("event"),
    UserFeedback("user_report"),
    Attachment("attachment"),
    Transaction("transaction"),
    Profile("profile"),
    ProfileChunk("profile_chunk"),
    ClientReport("client_report"),
    ReplayEvent("replay_event"),
    ReplayRecording("replay_recording"),
    ReplayVideo("replay_video"),
    CheckIn("check_in"),
    Feedback("feedback"),
    Log("log"),
    TraceMetric("trace_metric"),
    Span("span"),
    Unknown("__unknown__");

    private final String itemType;

    v4(String str) {
        this.itemType = str;
    }

    public static v4 resolve(Object obj) {
        return obj instanceof SentryEvent ? ((io.sentry.protocol.i) ((SentryEvent) obj).f11544e.x(io.sentry.protocol.i.class, "feedback")) == null ? Event : Feedback : obj instanceof io.sentry.protocol.d0 ? Transaction : obj instanceof g6 ? Session : obj instanceof io.sentry.clientreport.b ? ClientReport : Attachment;
    }

    @NotNull
    public static v4 valueOfLabel(String str) {
        for (v4 v4Var : values()) {
            if (v4Var.itemType.equals(str)) {
                return v4Var;
            }
        }
        return Unknown;
    }

    public String getItemType() {
        return this.itemType;
    }

    @Override // io.sentry.y1
    public void serialize(@NotNull y2 y2Var, @NotNull ILogger iLogger) {
        y2Var.s(this.itemType);
    }
}
