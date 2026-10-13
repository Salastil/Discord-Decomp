package io.sentry;

import com.discord.jank_stats.JankScreenContext;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public enum l {
    All("__all__"),
    Default("default"),
    Error("error"),
    Feedback("feedback"),
    Session("session"),
    Attachment("attachment"),
    LogItem("log_item"),
    LogByte("log_byte"),
    TraceMetric("trace_metric"),
    Monitor("monitor"),
    Profile("profile"),
    ProfileChunkUi("profile_chunk_ui"),
    ProfileChunk("profile_chunk"),
    Transaction("transaction"),
    Replay("replay"),
    Span("span"),
    Security("security"),
    UserReport("user_report"),
    Unknown(JankScreenContext.UNKNOWN_SCREEN);

    private final String category;

    l(@NotNull String str) {
        this.category = str;
    }

    public String getCategory() {
        return this.category;
    }
}
