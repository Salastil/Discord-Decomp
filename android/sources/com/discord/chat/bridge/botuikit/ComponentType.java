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
@Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b\u0018\b\u0087\u0081\u0002\u0018\u0000 \u001b2\u00020\u00012\b\u0012\u0004\u0012\u00020\u00000\u0002:\u0002\u001a\u001bB\u0011\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0004\b\u0005\u0010\u0006R\u0014\u0010\u0003\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012j\u0002\b\u0013j\u0002\b\u0014j\u0002\b\u0015j\u0002\b\u0016j\u0002\b\u0017j\u0002\b\u0018j\u0002\b\u0019¨\u0006\u001c"}, d2 = {"Lcom/discord/chat/bridge/botuikit/ComponentType;", "Lcom/discord/serialization/IntEnum;", "", "serialNumber", "", "<init>", "(Ljava/lang/String;II)V", "getSerialNumber", "()I", "UNKNOWN", "ACTION_ROW", "BUTTON", "SELECT", "USER_SELECT", "ROLE_SELECT", "MENTIONABLE_SELECT", "CHANNEL_SELECT", "SECTION", "TEXT_DISPLAY", "THUMBNAIL", "MEDIA_GALLERY", "FILE", "SEPARATOR", "CONTENT_INVENTORY_ENTRY", "CONTAINER", "CHECKPOINT_CARD", "Serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ComponentType implements IntEnum {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ ComponentType[] $VALUES;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    private final int serialNumber;
    public static final ComponentType UNKNOWN = new ComponentType("UNKNOWN", 0, 0);
    public static final ComponentType ACTION_ROW = new ComponentType("ACTION_ROW", 1, 1);
    public static final ComponentType BUTTON = new ComponentType("BUTTON", 2, 2);
    public static final ComponentType SELECT = new ComponentType("SELECT", 3, 3);
    public static final ComponentType USER_SELECT = new ComponentType("USER_SELECT", 4, 5);
    public static final ComponentType ROLE_SELECT = new ComponentType("ROLE_SELECT", 5, 6);
    public static final ComponentType MENTIONABLE_SELECT = new ComponentType("MENTIONABLE_SELECT", 6, 7);
    public static final ComponentType CHANNEL_SELECT = new ComponentType("CHANNEL_SELECT", 7, 8);
    public static final ComponentType SECTION = new ComponentType("SECTION", 8, 9);
    public static final ComponentType TEXT_DISPLAY = new ComponentType("TEXT_DISPLAY", 9, 10);
    public static final ComponentType THUMBNAIL = new ComponentType("THUMBNAIL", 10, 11);
    public static final ComponentType MEDIA_GALLERY = new ComponentType("MEDIA_GALLERY", 11, 12);
    public static final ComponentType FILE = new ComponentType("FILE", 12, 13);
    public static final ComponentType SEPARATOR = new ComponentType("SEPARATOR", 13, 14);
    public static final ComponentType CONTENT_INVENTORY_ENTRY = new ComponentType("CONTENT_INVENTORY_ENTRY", 14, 16);
    public static final ComponentType CONTAINER = new ComponentType("CONTAINER", 15, 17);
    public static final ComponentType CHECKPOINT_CARD = new ComponentType("CHECKPOINT_CARD", 16, 20);

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/botuikit/ComponentType$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/botuikit/ComponentType;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
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

    @Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004¨\u0006\u0005"}, d2 = {"Lcom/discord/chat/bridge/botuikit/ComponentType$Serializer;", "Lcom/discord/serialization/IntEnumSerializer;", "Lcom/discord/chat/bridge/botuikit/ComponentType;", "<init>", "()V", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Serializer extends IntEnumSerializer<ComponentType> {

        @NotNull
        public static final Serializer INSTANCE = new Serializer();

        private Serializer() {
            super(Reflection.getOrCreateKotlinClass(ComponentType.class), ComponentType.UNKNOWN);
        }
    }

    private static final /* synthetic */ ComponentType[] $values() {
        return new ComponentType[]{UNKNOWN, ACTION_ROW, BUTTON, SELECT, USER_SELECT, ROLE_SELECT, MENTIONABLE_SELECT, CHANNEL_SELECT, SECTION, TEXT_DISPLAY, THUMBNAIL, MEDIA_GALLERY, FILE, SEPARATOR, CONTENT_INVENTORY_ENTRY, CONTAINER, CHECKPOINT_CARD};
    }

    static {
        ComponentType[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
        INSTANCE = new Companion(null);
    }

    private ComponentType(String str, int i5, int i6) {
        this.serialNumber = i6;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static ComponentType valueOf(String str) {
        return (ComponentType) Enum.valueOf(ComponentType.class, str);
    }

    public static ComponentType[] values() {
        return (ComponentType[]) $VALUES.clone();
    }

    @Override // com.discord.serialization.IntEnum
    public int getSerialNumber() {
        return this.serialNumber;
    }
}
