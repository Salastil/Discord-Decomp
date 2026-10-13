package com.discord.chat.bridge.codedlinks;

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
@Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b\u000e\b\u0087\u0081\u0002\u0018\u0000 \u00112\u00020\u00012\b\u0012\u0004\u0012\u00020\u00000\u0002:\u0002\u0010\u0011B\u0011\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0004\b\u0005\u0010\u0006R\u0014\u0010\u0003\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000f¨\u0006\u0012"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;", "Lcom/discord/serialization/IntEnum;", "", "serialNumber", "", "<init>", "(Ljava/lang/String;II)V", "getSerialNumber", "()I", "STAGE_INSTANCE", "GUILD_SCHEDULED_EVENT", "GUILD_INVITE_DISABLED", "EMBEDDED_ACTIVITY_INVITE", "APP_MESSAGE_EMBED", "GUILD_PROFILE_INVITE", "VOICE_CHANNEL_LIST_INVITE", "Serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class CodedLinkExtendedType implements IntEnum {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ CodedLinkExtendedType[] $VALUES;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    private final int serialNumber;
    public static final CodedLinkExtendedType STAGE_INSTANCE = new CodedLinkExtendedType("STAGE_INSTANCE", 0, 0);
    public static final CodedLinkExtendedType GUILD_SCHEDULED_EVENT = new CodedLinkExtendedType("GUILD_SCHEDULED_EVENT", 1, 1);
    public static final CodedLinkExtendedType GUILD_INVITE_DISABLED = new CodedLinkExtendedType("GUILD_INVITE_DISABLED", 2, 2);
    public static final CodedLinkExtendedType EMBEDDED_ACTIVITY_INVITE = new CodedLinkExtendedType("EMBEDDED_ACTIVITY_INVITE", 3, 3);
    public static final CodedLinkExtendedType APP_MESSAGE_EMBED = new CodedLinkExtendedType("APP_MESSAGE_EMBED", 4, 4);
    public static final CodedLinkExtendedType GUILD_PROFILE_INVITE = new CodedLinkExtendedType("GUILD_PROFILE_INVITE", 5, 5);
    public static final CodedLinkExtendedType VOICE_CHANNEL_LIST_INVITE = new CodedLinkExtendedType("VOICE_CHANNEL_LIST_INVITE", 6, 6);

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
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

    @Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004¨\u0006\u0005"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType$Serializer;", "Lcom/discord/serialization/IntEnumSerializer;", "Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;", "<init>", "()V", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Serializer extends IntEnumSerializer<CodedLinkExtendedType> {

        @NotNull
        public static final Serializer INSTANCE = new Serializer();

        /* JADX WARN: Multi-variable type inference failed */
        private Serializer() {
            super(Reflection.getOrCreateKotlinClass(CodedLinkExtendedType.class), null, 2, 0 == true ? 1 : 0);
        }
    }

    private static final /* synthetic */ CodedLinkExtendedType[] $values() {
        return new CodedLinkExtendedType[]{STAGE_INSTANCE, GUILD_SCHEDULED_EVENT, GUILD_INVITE_DISABLED, EMBEDDED_ACTIVITY_INVITE, APP_MESSAGE_EMBED, GUILD_PROFILE_INVITE, VOICE_CHANNEL_LIST_INVITE};
    }

    static {
        CodedLinkExtendedType[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
        INSTANCE = new Companion(null);
    }

    private CodedLinkExtendedType(String str, int i5, int i6) {
        this.serialNumber = i6;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static CodedLinkExtendedType valueOf(String str) {
        return (CodedLinkExtendedType) Enum.valueOf(CodedLinkExtendedType.class, str);
    }

    public static CodedLinkExtendedType[] values() {
        return (CodedLinkExtendedType[]) $VALUES.clone();
    }

    @Override // com.discord.serialization.IntEnum
    public int getSerialNumber() {
        return this.serialNumber;
    }
}
