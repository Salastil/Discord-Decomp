package com.discord.chat.bridge;

import com.discord.chat.bridge.MessageType;
import com.discord.serialization.IntEnum;
import com.discord.serialization.IntEnumSerializer;
import fo.d;
import fo.l;
import java.util.EnumSet;
import java.util.Set;
import ki.b;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlinx.serialization.KSerializer;
import org.jetbrains.annotations.NotNull;
import xr.e;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@e(with = Serializer.class)
@Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b@\n\u0002\u0010\u000b\n\u0002\b\f\b\u0087\u0081\u0002\u0018\u0000 P2\u00020\u00012\b\u0012\u0004\u0012\u00020\u00000\u0002:\u0002OPB\u0011\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0004\b\u0005\u0010\u0006R\u0014\u0010\u0003\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u001b\u0010D\u001a\u00020E8FX\u0086\u0084\u0002¢\u0006\f\n\u0004\bG\u0010H\u001a\u0004\bD\u0010FR\u001b\u0010I\u001a\u00020E8FX\u0086\u0084\u0002¢\u0006\f\n\u0004\bJ\u0010H\u001a\u0004\bI\u0010FR\u001b\u0010K\u001a\u00020E8FX\u0086\u0084\u0002¢\u0006\f\n\u0004\bL\u0010H\u001a\u0004\bK\u0010FR\u001b\u0010M\u001a\u00020E8FX\u0086\u0084\u0002¢\u0006\f\n\u0004\bN\u0010H\u001a\u0004\bM\u0010Fj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012j\u0002\b\u0013j\u0002\b\u0014j\u0002\b\u0015j\u0002\b\u0016j\u0002\b\u0017j\u0002\b\u0018j\u0002\b\u0019j\u0002\b\u001aj\u0002\b\u001bj\u0002\b\u001cj\u0002\b\u001dj\u0002\b\u001ej\u0002\b\u001fj\u0002\b j\u0002\b!j\u0002\b\"j\u0002\b#j\u0002\b$j\u0002\b%j\u0002\b&j\u0002\b'j\u0002\b(j\u0002\b)j\u0002\b*j\u0002\b+j\u0002\b,j\u0002\b-j\u0002\b.j\u0002\b/j\u0002\b0j\u0002\b1j\u0002\b2j\u0002\b3j\u0002\b4j\u0002\b5j\u0002\b6j\u0002\b7j\u0002\b8j\u0002\b9j\u0002\b:j\u0002\b;j\u0002\b<j\u0002\b=j\u0002\b>j\u0002\b?j\u0002\b@j\u0002\bAj\u0002\bBj\u0002\bC¨\u0006Q"}, d2 = {"Lcom/discord/chat/bridge/MessageType;", "Lcom/discord/serialization/IntEnum;", "", "serialNumber", "", "<init>", "(Ljava/lang/String;II)V", "getSerialNumber", "()I", "DEFAULT", "RECIPIENT_ADD", "RECIPIENT_REMOVE", "CALL", "CHANNEL_NAME_CHANGE", "CHANNEL_ICON_CHANGE", "CHANNEL_PINNED_MESSAGE", "USER_JOIN", "USER_PREMIUM_GUILD_SUBSCRIPTION", "USER_PREMIUM_GUILD_SUBSCRIPTION_TIER_1", "USER_PREMIUM_GUILD_SUBSCRIPTION_TIER_2", "USER_PREMIUM_GUILD_SUBSCRIPTION_TIER_3", "CHANNEL_FOLLOW_ADD", "GUILD_STREAM", "GUILD_DISCOVERY_DISQUALIFIED", "GUILD_DISCOVERY_REQUALIFIED", "GUILD_DISCOVERY_GRACE_PERIOD_INITIAL_WARNING", "GUILD_DISCOVERY_GRACE_PERIOD_FINAL_WARNING", "THREAD_CREATED", "REPLY", "CHAT_INPUT_COMMAND", "THREAD_STARTER_MESSAGE", "GUILD_INVITE_REMINDER", "CONTEXT_MENU_COMMAND", "AUTO_MODERATION_ACTION", "ROLE_SUBSCRIPTION_PURCHASE", "INTERACTION_PREMIUM_UPSELL", "STAGE_START", "STAGE_END", "STAGE_SPEAKER", "STAGE_RAISE_HAND", "STAGE_TOPIC", "GUILD_APPLICATION_PREMIUM_SUBSCRIPTION", "PRIVATE_CHANNEL_INTEGRATION_ADDED", "PRIVATE_CHANNEL_INTEGRATION_REMOVED", "PREMIUM_REFERRAL", "GUILD_INCIDENT_ALERT_MODE_ENABLED", "GUILD_INCIDENT_ALERT_MODE_DISABLED", "GUILD_INCIDENT_REPORT_RAID", "GUILD_INCIDENT_REPORT_FALSE_ALARM", "GUILD_DEADCHAT_REVIVE_PROMPT", "CUSTOM_GIFT", "GUILD_GAMING_STATS_PROMPT", "VOICE_CHANNEL_INVITE", "POLL_RESULT", "CHANGELOG", "CHANNEL_LINKED_TO_LOBBY", "GIFTING_PROMPT", "IN_GAME_MESSAGE_NUX", "GUILD_JOIN_REQUEST_ACCEPT_NOTIFICATION", "GUILD_JOIN_REQUEST_REJECT_NOTIFICATION", "GUILD_JOIN_REQUEST_WITHDRAWN_NOTIFICATION", "CHAT_WALLPAPER_SET", "CHAT_WALLPAPER_REMOVED", "EMOJI_ADDED", "PREMIUM_GROUP_INVITE", "VOICE_SESSION", "FRIEND_REQUEST_ACCEPTED", "GUILD_SPACE_MESSAGE", "isSystem", "", "()Z", "isSystem$delegate", "Lkotlin/Lazy;", "isAutomodSystem", "isAutomodSystem$delegate", "isCall", "isCall$delegate", "isPremiumSystem", "isPremiumSystem$delegate", "Serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class MessageType implements IntEnum {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ MessageType[] $VALUES;
    public static final MessageType AUTO_MODERATION_ACTION;
    public static final MessageType CALL;
    public static final MessageType CHANGELOG;
    public static final MessageType CHANNEL_FOLLOW_ADD;
    public static final MessageType CHANNEL_ICON_CHANGE;
    public static final MessageType CHANNEL_LINKED_TO_LOBBY;
    public static final MessageType CHANNEL_NAME_CHANGE;
    public static final MessageType CHANNEL_PINNED_MESSAGE;
    public static final MessageType CHAT_INPUT_COMMAND;
    public static final MessageType CHAT_WALLPAPER_REMOVED;
    public static final MessageType CHAT_WALLPAPER_SET;
    public static final MessageType CONTEXT_MENU_COMMAND;
    public static final MessageType CUSTOM_GIFT;

    @NotNull
    private static final Set<MessageType> CallTypes;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    public static final MessageType DEFAULT = new MessageType("DEFAULT", 0, 0);
    public static final MessageType EMOJI_ADDED;
    public static final MessageType FRIEND_REQUEST_ACCEPTED;
    public static final MessageType GIFTING_PROMPT;
    public static final MessageType GUILD_APPLICATION_PREMIUM_SUBSCRIPTION;
    public static final MessageType GUILD_DEADCHAT_REVIVE_PROMPT;
    public static final MessageType GUILD_DISCOVERY_DISQUALIFIED;
    public static final MessageType GUILD_DISCOVERY_GRACE_PERIOD_FINAL_WARNING;
    public static final MessageType GUILD_DISCOVERY_GRACE_PERIOD_INITIAL_WARNING;
    public static final MessageType GUILD_DISCOVERY_REQUALIFIED;
    public static final MessageType GUILD_GAMING_STATS_PROMPT;
    public static final MessageType GUILD_INCIDENT_ALERT_MODE_DISABLED;
    public static final MessageType GUILD_INCIDENT_ALERT_MODE_ENABLED;
    public static final MessageType GUILD_INCIDENT_REPORT_FALSE_ALARM;
    public static final MessageType GUILD_INCIDENT_REPORT_RAID;

    @d
    public static final MessageType GUILD_INVITE_REMINDER;
    public static final MessageType GUILD_JOIN_REQUEST_ACCEPT_NOTIFICATION;
    public static final MessageType GUILD_JOIN_REQUEST_REJECT_NOTIFICATION;
    public static final MessageType GUILD_JOIN_REQUEST_WITHDRAWN_NOTIFICATION;
    public static final MessageType GUILD_SPACE_MESSAGE;

    @d
    public static final MessageType GUILD_STREAM;
    public static final MessageType INTERACTION_PREMIUM_UPSELL;
    public static final MessageType IN_GAME_MESSAGE_NUX;
    public static final MessageType POLL_RESULT;
    public static final MessageType PREMIUM_GROUP_INVITE;
    public static final MessageType PREMIUM_REFERRAL;
    public static final MessageType PRIVATE_CHANNEL_INTEGRATION_ADDED;
    public static final MessageType PRIVATE_CHANNEL_INTEGRATION_REMOVED;

    @NotNull
    private static final Set<MessageType> PremiumSystemTypes;
    public static final MessageType RECIPIENT_ADD;
    public static final MessageType RECIPIENT_REMOVE;
    public static final MessageType REPLY;
    public static final MessageType ROLE_SUBSCRIPTION_PURCHASE;
    public static final MessageType STAGE_END;
    public static final MessageType STAGE_RAISE_HAND;
    public static final MessageType STAGE_SPEAKER;
    public static final MessageType STAGE_START;
    public static final MessageType STAGE_TOPIC;

    @NotNull
    private static final Set<MessageType> SystemTypes;
    public static final MessageType THREAD_CREATED;
    public static final MessageType THREAD_STARTER_MESSAGE;
    public static final MessageType USER_JOIN;
    public static final MessageType USER_PREMIUM_GUILD_SUBSCRIPTION;
    public static final MessageType USER_PREMIUM_GUILD_SUBSCRIPTION_TIER_1;
    public static final MessageType USER_PREMIUM_GUILD_SUBSCRIPTION_TIER_2;
    public static final MessageType USER_PREMIUM_GUILD_SUBSCRIPTION_TIER_3;
    public static final MessageType VOICE_CHANNEL_INVITE;
    public static final MessageType VOICE_SESSION;

    /* renamed from: isAutomodSystem$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy isAutomodSystem;

    /* renamed from: isCall$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy isCall;

    /* renamed from: isPremiumSystem$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy isPremiumSystem;

    /* renamed from: isSystem$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy isSystem;
    private final int serialNumber;

    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\"\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\r\u001a\b\u0012\u0004\u0012\u00020\u00060\u000eR\u0017\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0017\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\bR\u0017\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\b¨\u0006\u000f"}, d2 = {"Lcom/discord/chat/bridge/MessageType$Companion;", "", "<init>", "()V", "SystemTypes", "", "Lcom/discord/chat/bridge/MessageType;", "getSystemTypes", "()Ljava/util/Set;", "CallTypes", "getCallTypes", "PremiumSystemTypes", "getPremiumSystemTypes", "serializer", "Lkotlinx/serialization/KSerializer;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final Set<MessageType> getCallTypes() {
            return MessageType.CallTypes;
        }

        @NotNull
        public final Set<MessageType> getPremiumSystemTypes() {
            return MessageType.PremiumSystemTypes;
        }

        @NotNull
        public final Set<MessageType> getSystemTypes() {
            return MessageType.SystemTypes;
        }

        @NotNull
        public final KSerializer serializer() {
            return Serializer.INSTANCE;
        }

        private Companion() {
        }
    }

    @Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004¨\u0006\u0005"}, d2 = {"Lcom/discord/chat/bridge/MessageType$Serializer;", "Lcom/discord/serialization/IntEnumSerializer;", "Lcom/discord/chat/bridge/MessageType;", "<init>", "()V", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Serializer extends IntEnumSerializer<MessageType> {

        @NotNull
        public static final Serializer INSTANCE = new Serializer();

        /* JADX WARN: Multi-variable type inference failed */
        private Serializer() {
            super(Reflection.getOrCreateKotlinClass(MessageType.class), null, 2, 0 == true ? 1 : 0);
        }
    }

    private static final /* synthetic */ MessageType[] $values() {
        return new MessageType[]{DEFAULT, RECIPIENT_ADD, RECIPIENT_REMOVE, CALL, CHANNEL_NAME_CHANGE, CHANNEL_ICON_CHANGE, CHANNEL_PINNED_MESSAGE, USER_JOIN, USER_PREMIUM_GUILD_SUBSCRIPTION, USER_PREMIUM_GUILD_SUBSCRIPTION_TIER_1, USER_PREMIUM_GUILD_SUBSCRIPTION_TIER_2, USER_PREMIUM_GUILD_SUBSCRIPTION_TIER_3, CHANNEL_FOLLOW_ADD, GUILD_STREAM, GUILD_DISCOVERY_DISQUALIFIED, GUILD_DISCOVERY_REQUALIFIED, GUILD_DISCOVERY_GRACE_PERIOD_INITIAL_WARNING, GUILD_DISCOVERY_GRACE_PERIOD_FINAL_WARNING, THREAD_CREATED, REPLY, CHAT_INPUT_COMMAND, THREAD_STARTER_MESSAGE, GUILD_INVITE_REMINDER, CONTEXT_MENU_COMMAND, AUTO_MODERATION_ACTION, ROLE_SUBSCRIPTION_PURCHASE, INTERACTION_PREMIUM_UPSELL, STAGE_START, STAGE_END, STAGE_SPEAKER, STAGE_RAISE_HAND, STAGE_TOPIC, GUILD_APPLICATION_PREMIUM_SUBSCRIPTION, PRIVATE_CHANNEL_INTEGRATION_ADDED, PRIVATE_CHANNEL_INTEGRATION_REMOVED, PREMIUM_REFERRAL, GUILD_INCIDENT_ALERT_MODE_ENABLED, GUILD_INCIDENT_ALERT_MODE_DISABLED, GUILD_INCIDENT_REPORT_RAID, GUILD_INCIDENT_REPORT_FALSE_ALARM, GUILD_DEADCHAT_REVIVE_PROMPT, CUSTOM_GIFT, GUILD_GAMING_STATS_PROMPT, VOICE_CHANNEL_INVITE, POLL_RESULT, CHANGELOG, CHANNEL_LINKED_TO_LOBBY, GIFTING_PROMPT, IN_GAME_MESSAGE_NUX, GUILD_JOIN_REQUEST_ACCEPT_NOTIFICATION, GUILD_JOIN_REQUEST_REJECT_NOTIFICATION, GUILD_JOIN_REQUEST_WITHDRAWN_NOTIFICATION, CHAT_WALLPAPER_SET, CHAT_WALLPAPER_REMOVED, EMOJI_ADDED, PREMIUM_GROUP_INVITE, VOICE_SESSION, FRIEND_REQUEST_ACCEPTED, GUILD_SPACE_MESSAGE};
    }

    static {
        MessageType messageType = new MessageType("RECIPIENT_ADD", 1, 1);
        RECIPIENT_ADD = messageType;
        MessageType messageType2 = new MessageType("RECIPIENT_REMOVE", 2, 2);
        RECIPIENT_REMOVE = messageType2;
        MessageType messageType3 = new MessageType("CALL", 3, 3);
        CALL = messageType3;
        MessageType messageType4 = new MessageType("CHANNEL_NAME_CHANGE", 4, 4);
        CHANNEL_NAME_CHANGE = messageType4;
        MessageType messageType5 = new MessageType("CHANNEL_ICON_CHANGE", 5, 5);
        CHANNEL_ICON_CHANGE = messageType5;
        MessageType messageType6 = new MessageType("CHANNEL_PINNED_MESSAGE", 6, 6);
        CHANNEL_PINNED_MESSAGE = messageType6;
        MessageType messageType7 = new MessageType("USER_JOIN", 7, 7);
        USER_JOIN = messageType7;
        MessageType messageType8 = new MessageType("USER_PREMIUM_GUILD_SUBSCRIPTION", 8, 8);
        USER_PREMIUM_GUILD_SUBSCRIPTION = messageType8;
        MessageType messageType9 = new MessageType("USER_PREMIUM_GUILD_SUBSCRIPTION_TIER_1", 9, 9);
        USER_PREMIUM_GUILD_SUBSCRIPTION_TIER_1 = messageType9;
        MessageType messageType10 = new MessageType("USER_PREMIUM_GUILD_SUBSCRIPTION_TIER_2", 10, 10);
        USER_PREMIUM_GUILD_SUBSCRIPTION_TIER_2 = messageType10;
        MessageType messageType11 = new MessageType("USER_PREMIUM_GUILD_SUBSCRIPTION_TIER_3", 11, 11);
        USER_PREMIUM_GUILD_SUBSCRIPTION_TIER_3 = messageType11;
        MessageType messageType12 = new MessageType("CHANNEL_FOLLOW_ADD", 12, 12);
        CHANNEL_FOLLOW_ADD = messageType12;
        MessageType messageType13 = new MessageType("GUILD_STREAM", 13, 13);
        GUILD_STREAM = messageType13;
        MessageType messageType14 = new MessageType("GUILD_DISCOVERY_DISQUALIFIED", 14, 14);
        GUILD_DISCOVERY_DISQUALIFIED = messageType14;
        MessageType messageType15 = new MessageType("GUILD_DISCOVERY_REQUALIFIED", 15, 15);
        GUILD_DISCOVERY_REQUALIFIED = messageType15;
        MessageType messageType16 = new MessageType("GUILD_DISCOVERY_GRACE_PERIOD_INITIAL_WARNING", 16, 16);
        GUILD_DISCOVERY_GRACE_PERIOD_INITIAL_WARNING = messageType16;
        MessageType messageType17 = new MessageType("GUILD_DISCOVERY_GRACE_PERIOD_FINAL_WARNING", 17, 17);
        GUILD_DISCOVERY_GRACE_PERIOD_FINAL_WARNING = messageType17;
        MessageType messageType18 = new MessageType("THREAD_CREATED", 18, 18);
        THREAD_CREATED = messageType18;
        REPLY = new MessageType("REPLY", 19, 19);
        CHAT_INPUT_COMMAND = new MessageType("CHAT_INPUT_COMMAND", 20, 20);
        MessageType messageType19 = new MessageType("THREAD_STARTER_MESSAGE", 21, 21);
        THREAD_STARTER_MESSAGE = messageType19;
        MessageType messageType20 = new MessageType("GUILD_INVITE_REMINDER", 22, 22);
        GUILD_INVITE_REMINDER = messageType20;
        CONTEXT_MENU_COMMAND = new MessageType("CONTEXT_MENU_COMMAND", 23, 23);
        AUTO_MODERATION_ACTION = new MessageType("AUTO_MODERATION_ACTION", 24, 24);
        MessageType messageType21 = new MessageType("ROLE_SUBSCRIPTION_PURCHASE", 25, 25);
        ROLE_SUBSCRIPTION_PURCHASE = messageType21;
        INTERACTION_PREMIUM_UPSELL = new MessageType("INTERACTION_PREMIUM_UPSELL", 26, 26);
        MessageType messageType22 = new MessageType("STAGE_START", 27, 27);
        STAGE_START = messageType22;
        MessageType messageType23 = new MessageType("STAGE_END", 28, 28);
        STAGE_END = messageType23;
        MessageType messageType24 = new MessageType("STAGE_SPEAKER", 29, 29);
        STAGE_SPEAKER = messageType24;
        MessageType messageType25 = new MessageType("STAGE_RAISE_HAND", 30, 30);
        STAGE_RAISE_HAND = messageType25;
        MessageType messageType26 = new MessageType("STAGE_TOPIC", 31, 31);
        STAGE_TOPIC = messageType26;
        MessageType messageType27 = new MessageType("GUILD_APPLICATION_PREMIUM_SUBSCRIPTION", 32, 32);
        GUILD_APPLICATION_PREMIUM_SUBSCRIPTION = messageType27;
        MessageType messageType28 = new MessageType("PRIVATE_CHANNEL_INTEGRATION_ADDED", 33, 33);
        PRIVATE_CHANNEL_INTEGRATION_ADDED = messageType28;
        MessageType messageType29 = new MessageType("PRIVATE_CHANNEL_INTEGRATION_REMOVED", 34, 34);
        PRIVATE_CHANNEL_INTEGRATION_REMOVED = messageType29;
        MessageType messageType30 = new MessageType("PREMIUM_REFERRAL", 35, 35);
        PREMIUM_REFERRAL = messageType30;
        GUILD_INCIDENT_ALERT_MODE_ENABLED = new MessageType("GUILD_INCIDENT_ALERT_MODE_ENABLED", 36, 36);
        GUILD_INCIDENT_ALERT_MODE_DISABLED = new MessageType("GUILD_INCIDENT_ALERT_MODE_DISABLED", 37, 37);
        GUILD_INCIDENT_REPORT_RAID = new MessageType("GUILD_INCIDENT_REPORT_RAID", 38, 38);
        GUILD_INCIDENT_REPORT_FALSE_ALARM = new MessageType("GUILD_INCIDENT_REPORT_FALSE_ALARM", 39, 39);
        MessageType messageType31 = new MessageType("GUILD_DEADCHAT_REVIVE_PROMPT", 40, 40);
        GUILD_DEADCHAT_REVIVE_PROMPT = messageType31;
        CUSTOM_GIFT = new MessageType("CUSTOM_GIFT", 41, 41);
        MessageType messageType32 = new MessageType("GUILD_GAMING_STATS_PROMPT", 42, 42);
        GUILD_GAMING_STATS_PROMPT = messageType32;
        VOICE_CHANNEL_INVITE = new MessageType("VOICE_CHANNEL_INVITE", 43, 45);
        MessageType messageType33 = new MessageType("POLL_RESULT", 44, 46);
        POLL_RESULT = messageType33;
        CHANGELOG = new MessageType("CHANGELOG", 45, 47);
        MessageType messageType34 = new MessageType("CHANNEL_LINKED_TO_LOBBY", 46, 49);
        CHANNEL_LINKED_TO_LOBBY = messageType34;
        MessageType messageType35 = new MessageType("GIFTING_PROMPT", 47, 50);
        GIFTING_PROMPT = messageType35;
        MessageType messageType36 = new MessageType("IN_GAME_MESSAGE_NUX", 48, 51);
        IN_GAME_MESSAGE_NUX = messageType36;
        MessageType messageType37 = new MessageType("GUILD_JOIN_REQUEST_ACCEPT_NOTIFICATION", 49, 52);
        GUILD_JOIN_REQUEST_ACCEPT_NOTIFICATION = messageType37;
        MessageType messageType38 = new MessageType("GUILD_JOIN_REQUEST_REJECT_NOTIFICATION", 50, 53);
        GUILD_JOIN_REQUEST_REJECT_NOTIFICATION = messageType38;
        MessageType messageType39 = new MessageType("GUILD_JOIN_REQUEST_WITHDRAWN_NOTIFICATION", 51, 54);
        GUILD_JOIN_REQUEST_WITHDRAWN_NOTIFICATION = messageType39;
        MessageType messageType40 = new MessageType("CHAT_WALLPAPER_SET", 52, 56);
        CHAT_WALLPAPER_SET = messageType40;
        MessageType messageType41 = new MessageType("CHAT_WALLPAPER_REMOVED", 53, 57);
        CHAT_WALLPAPER_REMOVED = messageType41;
        MessageType messageType42 = new MessageType("EMOJI_ADDED", 54, 63);
        EMOJI_ADDED = messageType42;
        MessageType messageType43 = new MessageType("PREMIUM_GROUP_INVITE", 55, 64);
        PREMIUM_GROUP_INVITE = messageType43;
        MessageType messageType44 = new MessageType("VOICE_SESSION", 56, 65);
        VOICE_SESSION = messageType44;
        MessageType messageType45 = new MessageType("FRIEND_REQUEST_ACCEPTED", 57, 67);
        FRIEND_REQUEST_ACCEPTED = messageType45;
        MessageType messageType46 = new MessageType("GUILD_SPACE_MESSAGE", 58, 69);
        GUILD_SPACE_MESSAGE = messageType46;
        MessageType[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
        INSTANCE = new Companion(null);
        EnumSet of2 = EnumSet.of(messageType, messageType2, messageType3, messageType4, messageType5, messageType6, messageType7, messageType8, messageType9, messageType10, messageType11, messageType12, messageType13, messageType14, messageType15, messageType16, messageType17, messageType18, messageType19, messageType20, messageType21, messageType22, messageType23, messageType24, messageType25, messageType26, messageType27, messageType28, messageType29, messageType31, messageType32, messageType33, messageType34, messageType35, messageType36, messageType37, messageType38, messageType39, messageType40, messageType41, messageType42, messageType30, messageType44, messageType43, messageType45, messageType46);
        Intrinsics.checkNotNullExpressionValue(of2, "of(...)");
        SystemTypes = of2;
        EnumSet of3 = EnumSet.of(messageType3, messageType13);
        Intrinsics.checkNotNullExpressionValue(of3, "of(...)");
        CallTypes = of3;
        EnumSet of4 = EnumSet.of(messageType30, messageType43);
        Intrinsics.checkNotNullExpressionValue(of4, "of(...)");
        PremiumSystemTypes = of4;
    }

    private MessageType(String str, int i5, int i6) {
        this.serialNumber = i6;
        final int i10 = 0;
        this.isSystem = l.a(new Function0(this) { // from class: l5.b

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ MessageType f13838e;

            {
                this.f13838e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                boolean isSystem_delegate$lambda$0;
                switch (i10) {
                    case 0:
                        isSystem_delegate$lambda$0 = MessageType.isSystem_delegate$lambda$0(this.f13838e);
                        break;
                    case 1:
                        isSystem_delegate$lambda$0 = MessageType.isAutomodSystem_delegate$lambda$1(this.f13838e);
                        break;
                    case 2:
                        isSystem_delegate$lambda$0 = MessageType.isCall_delegate$lambda$2(this.f13838e);
                        break;
                    default:
                        isSystem_delegate$lambda$0 = MessageType.isPremiumSystem_delegate$lambda$3(this.f13838e);
                        break;
                }
                return Boolean.valueOf(isSystem_delegate$lambda$0);
            }
        });
        final int i11 = 1;
        this.isAutomodSystem = l.a(new Function0(this) { // from class: l5.b

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ MessageType f13838e;

            {
                this.f13838e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                boolean isSystem_delegate$lambda$0;
                switch (i11) {
                    case 0:
                        isSystem_delegate$lambda$0 = MessageType.isSystem_delegate$lambda$0(this.f13838e);
                        break;
                    case 1:
                        isSystem_delegate$lambda$0 = MessageType.isAutomodSystem_delegate$lambda$1(this.f13838e);
                        break;
                    case 2:
                        isSystem_delegate$lambda$0 = MessageType.isCall_delegate$lambda$2(this.f13838e);
                        break;
                    default:
                        isSystem_delegate$lambda$0 = MessageType.isPremiumSystem_delegate$lambda$3(this.f13838e);
                        break;
                }
                return Boolean.valueOf(isSystem_delegate$lambda$0);
            }
        });
        final int i12 = 2;
        this.isCall = l.a(new Function0(this) { // from class: l5.b

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ MessageType f13838e;

            {
                this.f13838e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                boolean isSystem_delegate$lambda$0;
                switch (i12) {
                    case 0:
                        isSystem_delegate$lambda$0 = MessageType.isSystem_delegate$lambda$0(this.f13838e);
                        break;
                    case 1:
                        isSystem_delegate$lambda$0 = MessageType.isAutomodSystem_delegate$lambda$1(this.f13838e);
                        break;
                    case 2:
                        isSystem_delegate$lambda$0 = MessageType.isCall_delegate$lambda$2(this.f13838e);
                        break;
                    default:
                        isSystem_delegate$lambda$0 = MessageType.isPremiumSystem_delegate$lambda$3(this.f13838e);
                        break;
                }
                return Boolean.valueOf(isSystem_delegate$lambda$0);
            }
        });
        final int i13 = 3;
        this.isPremiumSystem = l.a(new Function0(this) { // from class: l5.b

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ MessageType f13838e;

            {
                this.f13838e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                boolean isSystem_delegate$lambda$0;
                switch (i13) {
                    case 0:
                        isSystem_delegate$lambda$0 = MessageType.isSystem_delegate$lambda$0(this.f13838e);
                        break;
                    case 1:
                        isSystem_delegate$lambda$0 = MessageType.isAutomodSystem_delegate$lambda$1(this.f13838e);
                        break;
                    case 2:
                        isSystem_delegate$lambda$0 = MessageType.isCall_delegate$lambda$2(this.f13838e);
                        break;
                    default:
                        isSystem_delegate$lambda$0 = MessageType.isPremiumSystem_delegate$lambda$3(this.f13838e);
                        break;
                }
                return Boolean.valueOf(isSystem_delegate$lambda$0);
            }
        });
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean isAutomodSystem_delegate$lambda$1(MessageType messageType) {
        return messageType == AUTO_MODERATION_ACTION;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean isCall_delegate$lambda$2(MessageType messageType) {
        return CallTypes.contains(messageType);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean isPremiumSystem_delegate$lambda$3(MessageType messageType) {
        return PremiumSystemTypes.contains(messageType);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean isSystem_delegate$lambda$0(MessageType messageType) {
        return SystemTypes.contains(messageType);
    }

    public static MessageType valueOf(String str) {
        return (MessageType) Enum.valueOf(MessageType.class, str);
    }

    public static MessageType[] values() {
        return (MessageType[]) $VALUES.clone();
    }

    @Override // com.discord.serialization.IntEnum
    public int getSerialNumber() {
        return this.serialNumber;
    }

    public final boolean isAutomodSystem() {
        return ((Boolean) this.isAutomodSystem.getValue()).booleanValue();
    }

    public final boolean isCall() {
        return ((Boolean) this.isCall.getValue()).booleanValue();
    }

    public final boolean isPremiumSystem() {
        return ((Boolean) this.isPremiumSystem.getValue()).booleanValue();
    }

    public final boolean isSystem() {
        return ((Boolean) this.isSystem.getValue()).booleanValue();
    }
}
