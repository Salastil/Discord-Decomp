package com.discord.chat.bridge;

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
@Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b\u0016\b\u0087\u0081\u0002\u0018\u0000 \u00192\u00020\u00012\b\u0012\u0004\u0012\u00020\u00000\u0002:\u0002\u0018\u0019B\u0011\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0004\b\u0005\u0010\u0006R\u0014\u0010\u0003\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012j\u0002\b\u0013j\u0002\b\u0014j\u0002\b\u0015j\u0002\b\u0016j\u0002\b\u0017¨\u0006\u001a"}, d2 = {"Lcom/discord/chat/bridge/ChannelType;", "Lcom/discord/serialization/IntEnum;", "", "serialNumber", "", "<init>", "(Ljava/lang/String;II)V", "getSerialNumber", "()I", "DM", "GROUP_DM", "GUILD_TEXT", "GUILD_VOICE", "GUILD_CATEGORY", "GUILD_ANNOUNCEMENT", "GUILD_STORE", "ANNOUNCEMENT_THREAD", "PUBLIC_THREAD", "PRIVATE_THREAD", "GUILD_STAGE_VOICE", "GUILD_DIRECTORY", "GUILD_FORUM", "GUILD_MEDIA", "UNKNOWN", "Serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ChannelType implements IntEnum {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ ChannelType[] $VALUES;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    private final int serialNumber;
    public static final ChannelType DM = new ChannelType("DM", 0, 1);
    public static final ChannelType GROUP_DM = new ChannelType("GROUP_DM", 1, 3);
    public static final ChannelType GUILD_TEXT = new ChannelType("GUILD_TEXT", 2, 0);
    public static final ChannelType GUILD_VOICE = new ChannelType("GUILD_VOICE", 3, 2);
    public static final ChannelType GUILD_CATEGORY = new ChannelType("GUILD_CATEGORY", 4, 4);
    public static final ChannelType GUILD_ANNOUNCEMENT = new ChannelType("GUILD_ANNOUNCEMENT", 5, 5);
    public static final ChannelType GUILD_STORE = new ChannelType("GUILD_STORE", 6, 6);
    public static final ChannelType ANNOUNCEMENT_THREAD = new ChannelType("ANNOUNCEMENT_THREAD", 7, 10);
    public static final ChannelType PUBLIC_THREAD = new ChannelType("PUBLIC_THREAD", 8, 11);
    public static final ChannelType PRIVATE_THREAD = new ChannelType("PRIVATE_THREAD", 9, 12);
    public static final ChannelType GUILD_STAGE_VOICE = new ChannelType("GUILD_STAGE_VOICE", 10, 13);
    public static final ChannelType GUILD_DIRECTORY = new ChannelType("GUILD_DIRECTORY", 11, 14);
    public static final ChannelType GUILD_FORUM = new ChannelType("GUILD_FORUM", 12, 15);
    public static final ChannelType GUILD_MEDIA = new ChannelType("GUILD_MEDIA", 13, 16);
    public static final ChannelType UNKNOWN = new ChannelType("UNKNOWN", 14, 10000);

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/ChannelType$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/ChannelType;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
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

    @Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004¨\u0006\u0005"}, d2 = {"Lcom/discord/chat/bridge/ChannelType$Serializer;", "Lcom/discord/serialization/IntEnumSerializer;", "Lcom/discord/chat/bridge/ChannelType;", "<init>", "()V", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Serializer extends IntEnumSerializer<ChannelType> {

        @NotNull
        public static final Serializer INSTANCE = new Serializer();

        /* JADX WARN: Multi-variable type inference failed */
        private Serializer() {
            super(Reflection.getOrCreateKotlinClass(ChannelType.class), null, 2, 0 == true ? 1 : 0);
        }
    }

    private static final /* synthetic */ ChannelType[] $values() {
        return new ChannelType[]{DM, GROUP_DM, GUILD_TEXT, GUILD_VOICE, GUILD_CATEGORY, GUILD_ANNOUNCEMENT, GUILD_STORE, ANNOUNCEMENT_THREAD, PUBLIC_THREAD, PRIVATE_THREAD, GUILD_STAGE_VOICE, GUILD_DIRECTORY, GUILD_FORUM, GUILD_MEDIA, UNKNOWN};
    }

    static {
        ChannelType[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
        INSTANCE = new Companion(null);
    }

    private ChannelType(String str, int i5, int i6) {
        this.serialNumber = i6;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static ChannelType valueOf(String str) {
        return (ChannelType) Enum.valueOf(ChannelType.class, str);
    }

    public static ChannelType[] values() {
        return (ChannelType[]) $VALUES.clone();
    }

    @Override // com.discord.serialization.IntEnum
    public int getSerialNumber() {
        return this.serialNumber;
    }
}
