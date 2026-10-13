package com.discord.chat.bridge.codedlinks;

import cs.f;
import cs.h;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.json.JsonElement;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u0005H\u0014¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/CodedLinkSerializer;", "Lcs/f;", "Lcom/discord/chat/bridge/codedlinks/CodedLinkEmbed;", "<init>", "()V", "Lkotlinx/serialization/json/JsonElement;", "element", "Lkotlinx/serialization/DeserializationStrategy;", "selectDeserializer", "(Lkotlinx/serialization/json/JsonElement;)Lkotlinx/serialization/DeserializationStrategy;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class CodedLinkSerializer extends f {

    @NotNull
    public static final CodedLinkSerializer INSTANCE = new CodedLinkSerializer();

    private CodedLinkSerializer() {
        super(Reflection.getOrCreateKotlinClass(CodedLinkEmbed.class));
    }

    @Override // cs.f
    @NotNull
    public DeserializationStrategy selectDeserializer(@NotNull JsonElement element) {
        Intrinsics.checkNotNullParameter(element, "element");
        JsonElement jsonElement = (JsonElement) h.j(element).get("extendedType");
        String a = jsonElement != null ? h.k(jsonElement).a() : null;
        return Intrinsics.areEqual(a, String.valueOf(CodedLinkExtendedType.GUILD_SCHEDULED_EVENT.getSerialNumber())) ? GuildEventInviteEmbedImpl.INSTANCE.serializer() : Intrinsics.areEqual(a, String.valueOf(CodedLinkExtendedType.GUILD_INVITE_DISABLED.getSerialNumber())) ? GuildInviteDisabledEmbedImpl.INSTANCE.serializer() : Intrinsics.areEqual(a, String.valueOf(CodedLinkExtendedType.APP_MESSAGE_EMBED.getSerialNumber())) ? AppMessageEmbedImpl.INSTANCE.serializer() : Intrinsics.areEqual(a, String.valueOf(CodedLinkExtendedType.EMBEDDED_ACTIVITY_INVITE.getSerialNumber())) ? EmbeddedActivityInviteEmbedImpl.INSTANCE.serializer() : Intrinsics.areEqual(a, String.valueOf(CodedLinkExtendedType.GUILD_PROFILE_INVITE.getSerialNumber())) ? GuildProfileInviteEmbedImpl.INSTANCE.serializer() : Intrinsics.areEqual(a, String.valueOf(CodedLinkExtendedType.VOICE_CHANNEL_LIST_INVITE.getSerialNumber())) ? VoiceChannelListInviteEmbedImpl.INSTANCE.serializer() : GuildInviteEmbedImpl.INSTANCE.serializer();
    }
}
