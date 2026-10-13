package com.discord.chat.bridge.botuikit;

import com.discord.serialization.IntEnum;
import com.discord.serialization.IntEnumSerializer;
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
@Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b\f\b\u0087\u0081\u0002\u0018\u0000 \u000f2\u00020\u00012\b\u0012\u0004\u0012\u00020\u00000\u0002:\u0002\u000e\u000fB\u0011\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0004\b\u0005\u0010\u0006R\u0014\u0010\u0003\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\r¨\u0006\u0010"}, d2 = {"Lcom/discord/chat/bridge/botuikit/SelectOptionType;", "Lcom/discord/serialization/IntEnum;", "", "serialNumber", "", "<init>", "(Ljava/lang/String;II)V", "getSerialNumber", "()I", "UNKNOWN", "STRING", "USER", "ROLE", "CHANNEL", "Serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class SelectOptionType implements IntEnum {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ SelectOptionType[] $VALUES;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    private final int serialNumber;
    public static final SelectOptionType UNKNOWN = new SelectOptionType("UNKNOWN", 0, 0);
    public static final SelectOptionType STRING = new SelectOptionType("STRING", 1, 1);
    public static final SelectOptionType USER = new SelectOptionType("USER", 2, 2);
    public static final SelectOptionType ROLE = new SelectOptionType("ROLE", 3, 3);
    public static final SelectOptionType CHANNEL = new SelectOptionType("CHANNEL", 4, 4);

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/botuikit/SelectOptionType$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/botuikit/SelectOptionType;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
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

    @Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004¨\u0006\u0005"}, d2 = {"Lcom/discord/chat/bridge/botuikit/SelectOptionType$Serializer;", "Lcom/discord/serialization/IntEnumSerializer;", "Lcom/discord/chat/bridge/botuikit/SelectOptionType;", "<init>", "()V", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Serializer extends IntEnumSerializer<SelectOptionType> {

        @NotNull
        public static final Serializer INSTANCE = new Serializer();

        private Serializer() {
            super(Reflection.getOrCreateKotlinClass(SelectOptionType.class), SelectOptionType.UNKNOWN);
        }
    }

    private static final /* synthetic */ SelectOptionType[] $values() {
        return new SelectOptionType[]{UNKNOWN, STRING, USER, ROLE, CHANNEL};
    }

    static {
        SelectOptionType[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
        INSTANCE = new Companion(null);
    }

    private SelectOptionType(String str, int i5, int i6) {
        this.serialNumber = i6;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static SelectOptionType valueOf(String str) {
        return (SelectOptionType) Enum.valueOf(SelectOptionType.class, str);
    }

    public static SelectOptionType[] values() {
        return (SelectOptionType[]) $VALUES.clone();
    }

    @Override // com.discord.serialization.IntEnum
    public int getSerialNumber() {
        return this.serialNumber;
    }
}
