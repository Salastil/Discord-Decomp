package com.discord.crash_reporting;

import com.discord.jank_stats.JankRecordStore;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\bÆ\u0002\u0018\u00002\u00020\u0001:\u0005\u0006\u0007\b\t\nB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\u0004\u001a\u00020\u0005¨\u0006\u000b"}, d2 = {"Lcom/discord/crash_reporting/TelemetryRingTypes;", "", "<init>", "()V", "defaultBudget", "Lcom/discord/crash_reporting/TelemetryRingTypes$Budget;", "BudgetType", "Budget", "Channel", "LogEntry", "Snapshot", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class TelemetryRingTypes {

    @NotNull
    public static final TelemetryRingTypes INSTANCE = new TelemetryRingTypes();

    @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\f\u001a\u00020\u0003HÆ\u0003J\t\u0010\r\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\u000e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0012\u001a\u00020\u0013HÖ\u0001J\t\u0010\u0014\u001a\u00020\u0015HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0016"}, d2 = {"Lcom/discord/crash_reporting/TelemetryRingTypes$Budget;", "", "type", "Lcom/discord/crash_reporting/TelemetryRingTypes$BudgetType;", "limit", "", "<init>", "(Lcom/discord/crash_reporting/TelemetryRingTypes$BudgetType;J)V", "getType", "()Lcom/discord/crash_reporting/TelemetryRingTypes$BudgetType;", "getLimit", "()J", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class Budget {
        private final long limit;

        @NotNull
        private final BudgetType type;

        public Budget(@NotNull BudgetType type, long j) {
            Intrinsics.checkNotNullParameter(type, "type");
            this.type = type;
            this.limit = j;
        }

        public static /* synthetic */ Budget copy$default(Budget budget, BudgetType budgetType, long j, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                budgetType = budget.type;
            }
            if ((i5 & 2) != 0) {
                j = budget.limit;
            }
            return budget.copy(budgetType, j);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final BudgetType getType() {
            return this.type;
        }

        /* renamed from: component2, reason: from getter */
        public final long getLimit() {
            return this.limit;
        }

        @NotNull
        public final Budget copy(@NotNull BudgetType type, long limit) {
            Intrinsics.checkNotNullParameter(type, "type");
            return new Budget(type, limit);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof Budget)) {
                return false;
            }
            Budget budget = (Budget) other;
            return this.type == budget.type && this.limit == budget.limit;
        }

        public final long getLimit() {
            return this.limit;
        }

        @NotNull
        public final BudgetType getType() {
            return this.type;
        }

        public int hashCode() {
            return Long.hashCode(this.limit) + (this.type.hashCode() * 31);
        }

        @NotNull
        public String toString() {
            return "Budget(type=" + this.type + ", limit=" + this.limit + ")";
        }
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0005\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005¨\u0006\u0006"}, d2 = {"Lcom/discord/crash_reporting/TelemetryRingTypes$BudgetType;", "", "<init>", "(Ljava/lang/String;I)V", "BYTES", "ROWS", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class BudgetType {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ BudgetType[] $VALUES;
        public static final BudgetType BYTES = new BudgetType("BYTES", 0);
        public static final BudgetType ROWS = new BudgetType("ROWS", 1);

        private static final /* synthetic */ BudgetType[] $values() {
            return new BudgetType[]{BYTES, ROWS};
        }

        static {
            BudgetType[] $values = $values();
            $VALUES = $values;
            $ENTRIES = ki.b.p($values);
        }

        private BudgetType(String str, int i5) {
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static BudgetType valueOf(String str) {
            return (BudgetType) Enum.valueOf(BudgetType.class, str);
        }

        public static BudgetType[] values() {
            return (BudgetType[]) $VALUES.clone();
        }
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b\b\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0011\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\n¨\u0006\u000b"}, d2 = {"Lcom/discord/crash_reporting/TelemetryRingTypes$Channel;", "", "bit", "", "<init>", "(Ljava/lang/String;II)V", "getBit", "()I", "SENTRY", "NORMAL", "ZOOMED", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Channel {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ Channel[] $VALUES;
        private final int bit;
        public static final Channel SENTRY = new Channel("SENTRY", 0, 1);
        public static final Channel NORMAL = new Channel("NORMAL", 1, 2);
        public static final Channel ZOOMED = new Channel("ZOOMED", 2, 4);

        private static final /* synthetic */ Channel[] $values() {
            return new Channel[]{SENTRY, NORMAL, ZOOMED};
        }

        static {
            Channel[] $values = $values();
            $VALUES = $values;
            $ENTRIES = ki.b.p($values);
        }

        private Channel(String str, int i5, int i6) {
            this.bit = i6;
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static Channel valueOf(String str) {
            return (Channel) Enum.valueOf(Channel.class, str);
        }

        public static Channel[] values() {
            return (Channel[]) $VALUES.clone();
        }

        public final int getBit() {
            return this.bit;
        }
    }

    @Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0011\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B-\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\u0006\u0010\b\u001a\u00020\t¢\u0006\u0004\b\n\u0010\u000bJ\u000f\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003HÆ\u0003J\t\u0010\u0014\u001a\u00020\u0006HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0006HÆ\u0003J\t\u0010\u0016\u001a\u00020\tHÆ\u0003J7\u0010\u0017\u001a\u00020\u00002\u000e\b\u0002\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\u00062\b\b\u0002\u0010\b\u001a\u00020\tHÆ\u0001J\u0013\u0010\u0018\u001a\u00020\t2\b\u0010\u0019\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001a\u001a\u00020\u001bHÖ\u0001J\t\u0010\u001c\u001a\u00020\u001dHÖ\u0001R\u0017\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0007\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012¨\u0006\u001e"}, d2 = {"Lcom/discord/crash_reporting/TelemetryRingTypes$Snapshot;", "", "entries", "", "Lcom/discord/crash_reporting/TelemetryRingTypes$LogEntry;", "nextBeforeOffset", "", "maxReturnedEndOffset", "hasMore", "", "<init>", "(Ljava/util/List;JJZ)V", "getEntries", "()Ljava/util/List;", "getNextBeforeOffset", "()J", "getMaxReturnedEndOffset", "getHasMore", "()Z", "component1", "component2", "component3", "component4", "copy", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class Snapshot {

        @NotNull
        private final List<LogEntry> entries;
        private final boolean hasMore;
        private final long maxReturnedEndOffset;
        private final long nextBeforeOffset;

        public Snapshot(@NotNull List<LogEntry> entries, long j, long j5, boolean z5) {
            Intrinsics.checkNotNullParameter(entries, "entries");
            this.entries = entries;
            this.nextBeforeOffset = j;
            this.maxReturnedEndOffset = j5;
            this.hasMore = z5;
        }

        public static /* synthetic */ Snapshot copy$default(Snapshot snapshot, List list, long j, long j5, boolean z5, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                list = snapshot.entries;
            }
            if ((i5 & 2) != 0) {
                j = snapshot.nextBeforeOffset;
            }
            if ((i5 & 4) != 0) {
                j5 = snapshot.maxReturnedEndOffset;
            }
            if ((i5 & 8) != 0) {
                z5 = snapshot.hasMore;
            }
            boolean z6 = z5;
            return snapshot.copy(list, j, j5, z6);
        }

        @NotNull
        public final List<LogEntry> component1() {
            return this.entries;
        }

        /* renamed from: component2, reason: from getter */
        public final long getNextBeforeOffset() {
            return this.nextBeforeOffset;
        }

        /* renamed from: component3, reason: from getter */
        public final long getMaxReturnedEndOffset() {
            return this.maxReturnedEndOffset;
        }

        /* renamed from: component4, reason: from getter */
        public final boolean getHasMore() {
            return this.hasMore;
        }

        @NotNull
        public final Snapshot copy(@NotNull List<LogEntry> entries, long nextBeforeOffset, long maxReturnedEndOffset, boolean hasMore) {
            Intrinsics.checkNotNullParameter(entries, "entries");
            return new Snapshot(entries, nextBeforeOffset, maxReturnedEndOffset, hasMore);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof Snapshot)) {
                return false;
            }
            Snapshot snapshot = (Snapshot) other;
            return Intrinsics.areEqual(this.entries, snapshot.entries) && this.nextBeforeOffset == snapshot.nextBeforeOffset && this.maxReturnedEndOffset == snapshot.maxReturnedEndOffset && this.hasMore == snapshot.hasMore;
        }

        @NotNull
        public final List<LogEntry> getEntries() {
            return this.entries;
        }

        public final boolean getHasMore() {
            return this.hasMore;
        }

        public final long getMaxReturnedEndOffset() {
            return this.maxReturnedEndOffset;
        }

        public final long getNextBeforeOffset() {
            return this.nextBeforeOffset;
        }

        public int hashCode() {
            return Boolean.hashCode(this.hasMore) + com.discord.chat.bridge.botuikit.a.g(this.maxReturnedEndOffset, com.discord.chat.bridge.botuikit.a.g(this.nextBeforeOffset, this.entries.hashCode() * 31, 31), 31);
        }

        @NotNull
        public String toString() {
            List<LogEntry> list = this.entries;
            long j = this.nextBeforeOffset;
            long j5 = this.maxReturnedEndOffset;
            boolean z5 = this.hasMore;
            StringBuilder sb2 = new StringBuilder("Snapshot(entries=");
            sb2.append(list);
            sb2.append(", nextBeforeOffset=");
            sb2.append(j);
            sb2.append(", maxReturnedEndOffset=");
            sb2.append(j5);
            sb2.append(", hasMore=");
            return com.discord.chat.bridge.botuikit.a.l(sb2, z5, ")");
        }
    }

    private TelemetryRingTypes() {
    }

    @NotNull
    public final Budget defaultBudget() {
        return new Budget(BudgetType.ROWS, 10000L);
    }

    @Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010$\n\u0000\n\u0002\u0010\b\n\u0002\b\u0012\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0086\b\u0018\u00002\u00020\u0001BG\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\u0018\b\u0002\u0010\u0007\u001a\u0012\u0012\u0004\u0012\u00020\u0003\u0012\u0006\u0012\u0004\u0018\u00010\u0001\u0018\u00010\b\u0012\b\b\u0002\u0010\t\u001a\u00020\n¢\u0006\u0004\b\u000b\u0010\fJ\t\u0010\u0016\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0017\u001a\u00020\u0005HÆ\u0003J\u000b\u0010\u0018\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0019\u0010\u0019\u001a\u0012\u0012\u0004\u0012\u00020\u0003\u0012\u0006\u0012\u0004\u0018\u00010\u0001\u0018\u00010\bHÆ\u0003J\t\u0010\u001a\u001a\u00020\nHÆ\u0003JM\u0010\u001b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00032\u0018\b\u0002\u0010\u0007\u001a\u0012\u0012\u0004\u0012\u00020\u0003\u0012\u0006\u0012\u0004\u0018\u00010\u0001\u0018\u00010\b2\b\b\u0002\u0010\t\u001a\u00020\nHÆ\u0001J\u0013\u0010\u001c\u001a\u00020\u001d2\b\u0010\u001e\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001f\u001a\u00020\nHÖ\u0001J\t\u0010 \u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u000eR!\u0010\u0007\u001a\u0012\u0012\u0004\u0012\u00020\u0003\u0012\u0006\u0012\u0004\u0018\u00010\u0001\u0018\u00010\b¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0011\u0010\t\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015¨\u0006!"}, d2 = {"Lcom/discord/crash_reporting/TelemetryRingTypes$LogEntry;", "", "key", "", "timestampMs", "", "message", "data", "", "channelMask", "", "<init>", "(Ljava/lang/String;JLjava/lang/String;Ljava/util/Map;I)V", "getKey", "()Ljava/lang/String;", "getTimestampMs", "()J", "getMessage", "getData", "()Ljava/util/Map;", "getChannelMask", "()I", "component1", "component2", "component3", "component4", "component5", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class LogEntry {
        private final int channelMask;
        private final Map<String, Object> data;

        @NotNull
        private final String key;
        private final String message;
        private final long timestampMs;

        public LogEntry(@NotNull String key, long j, String str, Map<String, ? extends Object> map, int i5) {
            Intrinsics.checkNotNullParameter(key, "key");
            this.key = key;
            this.timestampMs = j;
            this.message = str;
            this.data = map;
            this.channelMask = i5;
        }

        public static /* synthetic */ LogEntry copy$default(LogEntry logEntry, String str, long j, String str2, Map map, int i5, int i6, Object obj) {
            if ((i6 & 1) != 0) {
                str = logEntry.key;
            }
            if ((i6 & 2) != 0) {
                j = logEntry.timestampMs;
            }
            if ((i6 & 4) != 0) {
                str2 = logEntry.message;
            }
            if ((i6 & 8) != 0) {
                map = logEntry.data;
            }
            if ((i6 & 16) != 0) {
                i5 = logEntry.channelMask;
            }
            int i10 = i5;
            String str3 = str2;
            return logEntry.copy(str, j, str3, map, i10);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final String getKey() {
            return this.key;
        }

        /* renamed from: component2, reason: from getter */
        public final long getTimestampMs() {
            return this.timestampMs;
        }

        /* renamed from: component3, reason: from getter */
        public final String getMessage() {
            return this.message;
        }

        public final Map<String, Object> component4() {
            return this.data;
        }

        /* renamed from: component5, reason: from getter */
        public final int getChannelMask() {
            return this.channelMask;
        }

        @NotNull
        public final LogEntry copy(@NotNull String key, long timestampMs, String message, Map<String, ? extends Object> data, int channelMask) {
            Intrinsics.checkNotNullParameter(key, "key");
            return new LogEntry(key, timestampMs, message, data, channelMask);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof LogEntry)) {
                return false;
            }
            LogEntry logEntry = (LogEntry) other;
            return Intrinsics.areEqual(this.key, logEntry.key) && this.timestampMs == logEntry.timestampMs && Intrinsics.areEqual(this.message, logEntry.message) && Intrinsics.areEqual(this.data, logEntry.data) && this.channelMask == logEntry.channelMask;
        }

        public final int getChannelMask() {
            return this.channelMask;
        }

        public final Map<String, Object> getData() {
            return this.data;
        }

        @NotNull
        public final String getKey() {
            return this.key;
        }

        public final String getMessage() {
            return this.message;
        }

        public final long getTimestampMs() {
            return this.timestampMs;
        }

        public int hashCode() {
            int g6 = com.discord.chat.bridge.botuikit.a.g(this.timestampMs, this.key.hashCode() * 31, 31);
            String str = this.message;
            int hashCode = (g6 + (str == null ? 0 : str.hashCode())) * 31;
            Map<String, Object> map = this.data;
            return Integer.hashCode(this.channelMask) + ((hashCode + (map != null ? map.hashCode() : 0)) * 31);
        }

        @NotNull
        public String toString() {
            return "LogEntry(key=" + this.key + ", timestampMs=" + this.timestampMs + ", message=" + this.message + ", data=" + this.data + ", channelMask=" + this.channelMask + ")";
        }

        public /* synthetic */ LogEntry(String str, long j, String str2, Map map, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
            this(str, j, (i6 & 4) != 0 ? null : str2, (i6 & 8) != 0 ? null : map, (i6 & 16) != 0 ? 0 : i5);
        }
    }
}
