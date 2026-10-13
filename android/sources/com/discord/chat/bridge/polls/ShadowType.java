package com.discord.chat.bridge.polls;

import com.discord.serialization.IntEnum;
import com.discord.serialization.IntEnumSerializer;
import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Reflection;
import kotlinx.serialization.KSerializer;
import org.jetbrains.annotations.NotNull;
import xr.e;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@e(with = Serializer.class)
@Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b\f\b\u0087\u0081\u0002\u0018\u0000 \u000f2\u00020\u00012\b\u0012\u0004\u0012\u00020\u00000\u0002:\u0002\u000e\u000fB\u0019\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0004¢\u0006\u0004\b\u0006\u0010\u0007R\u0014\u0010\u0003\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0005\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\tj\u0002\b\u000bj\u0002\b\fj\u0002\b\r¨\u0006\u0010"}, d2 = {"Lcom/discord/chat/bridge/polls/ShadowType;", "Lcom/discord/serialization/IntEnum;", "", "serialNumber", "", "elevationDp", "<init>", "(Ljava/lang/String;III)V", "getSerialNumber", "()I", "getElevationDp", "NONE", "LOW", "HIGH", "Serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ShadowType implements IntEnum {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ ShadowType[] $VALUES;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    private final int elevationDp;
    private final int serialNumber;
    public static final ShadowType NONE = new ShadowType("NONE", 0, 0, 0);
    public static final ShadowType LOW = new ShadowType("LOW", 1, 1, 4);
    public static final ShadowType HIGH = new ShadowType("HIGH", 2, 2, 20);

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/polls/ShadowType$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/polls/ShadowType;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return Serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    @Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004¨\u0006\u0005"}, d2 = {"Lcom/discord/chat/bridge/polls/ShadowType$Serializer;", "Lcom/discord/serialization/IntEnumSerializer;", "Lcom/discord/chat/bridge/polls/ShadowType;", "<init>", "()V", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Serializer extends IntEnumSerializer<ShadowType> {

        @NotNull
        public static final Serializer INSTANCE = new Serializer();

        private Serializer() {
            super(Reflection.getOrCreateKotlinClass(ShadowType.class), ShadowType.NONE);
        }
    }

    private static final /* synthetic */ ShadowType[] $values() {
        return new ShadowType[]{NONE, LOW, HIGH};
    }

    static {
        ShadowType[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
        INSTANCE = new Companion(null);
    }

    private ShadowType(String str, int i5, int i6, int i10) {
        this.serialNumber = i6;
        this.elevationDp = i10;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static ShadowType valueOf(String str) {
        return (ShadowType) Enum.valueOf(ShadowType.class, str);
    }

    public static ShadowType[] values() {
        return (ShadowType[]) $VALUES.clone();
    }

    public final int getElevationDp() {
        return this.elevationDp;
    }

    @Override // com.discord.serialization.IntEnum
    public int getSerialNumber() {
        return this.serialNumber;
    }
}
