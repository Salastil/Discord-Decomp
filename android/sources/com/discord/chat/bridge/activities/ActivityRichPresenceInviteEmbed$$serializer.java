package com.discord.chat.bridge.activities;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.structurabletext.StructurableText;
import com.discord.chat.bridge.structurabletext.StructurableTextSerializer;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.modules.dialog.AlertFragment;
import ds.r;
import fo.d;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import nf.e;
import org.jetbrains.annotations.NotNull;
import org.webrtc.PeerConnection;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/activities/ActivityRichPresenceInviteEmbed.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/activities/ActivityRichPresenceInviteEmbed;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/activities/ActivityRichPresenceInviteEmbed;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/activities/ActivityRichPresenceInviteEmbed;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ActivityRichPresenceInviteEmbed$$serializer implements h0 {

    @NotNull
    public static final ActivityRichPresenceInviteEmbed$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ActivityRichPresenceInviteEmbed$$serializer activityRichPresenceInviteEmbed$$serializer = new ActivityRichPresenceInviteEmbed$$serializer();
        INSTANCE = activityRichPresenceInviteEmbed$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.activities.ActivityRichPresenceInviteEmbed", activityRichPresenceInviteEmbed$$serializer, 19);
        j1Var.k("displayType", false);
        j1Var.k("ctaButtonEnabled", true);
        j1Var.k("ctaButtonText", true);
        j1Var.k("ctaButtonIsLoading", true);
        j1Var.k("footerLabel", true);
        j1Var.k("gradientColors", true);
        j1Var.k("headerText", true);
        j1Var.k("iconSrc", true);
        j1Var.k("isPlatformSupported", true);
        j1Var.k("isSpotifyParty", true);
        j1Var.k("maxPartySize", true);
        j1Var.k("partyMemberAvatarURIs", true);
        j1Var.k("partySizeText", true);
        j1Var.k("platformIconKeys", true);
        j1Var.k("coverImageUrl", true);
        j1Var.k("detailsText", true);
        j1Var.k("subtitle", true);
        j1Var.k(AlertFragment.ARG_TITLE, true);
        j1Var.k("hiddenEmbedMessageContent", true);
        descriptor = j1Var;
    }

    private ActivityRichPresenceInviteEmbed$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = ActivityRichPresenceInviteEmbed.$childSerializers;
        g gVar = g.a;
        v1 v1Var = v1.a;
        return new KSerializer[]{lazyArr[0].getValue(), e.o(gVar), e.o(v1Var), e.o(gVar), e.o(v1Var), e.o((KSerializer) lazyArr[5].getValue()), e.o(v1Var), e.o(v1Var), e.o(gVar), e.o(gVar), e.o(o0.a), e.o((KSerializer) lazyArr[11].getValue()), e.o(v1Var), e.o((KSerializer) lazyArr[13].getValue()), e.o(v1Var), e.o(v1Var), e.o(v1Var), e.o(v1Var), e.o(StructurableTextSerializer.INSTANCE)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ActivityRichPresenceInviteEmbed deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        String str;
        int i5;
        EmbedDisplayType embedDisplayType;
        Boolean bool;
        Boolean bool2;
        String str2;
        String str3;
        String str4;
        List list;
        Integer num;
        String str5;
        StructurableText structurableText;
        Boolean bool3;
        String str6;
        Boolean bool4;
        String str7;
        List list2;
        String str8;
        String str9;
        List list3;
        String str10;
        int i6;
        String str11;
        List list4;
        String str12;
        String str13;
        List list5;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = ActivityRichPresenceInviteEmbed.$childSerializers;
        if (beginStructure.decodeSequentially()) {
            EmbedDisplayType embedDisplayType2 = (EmbedDisplayType) beginStructure.decodeSerializableElement(serialDescriptor, 0, (DeserializationStrategy) lazyArr[0].getValue(), null);
            g gVar = g.a;
            Boolean bool5 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, gVar, null);
            v1 v1Var = v1.a;
            String str14 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1Var, null);
            Boolean bool6 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, gVar, null);
            String str15 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            List list6 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, (DeserializationStrategy) lazyArr[5].getValue(), null);
            String str16 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1Var, null);
            String str17 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1Var, null);
            Boolean bool7 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, gVar, null);
            Boolean bool8 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, gVar, null);
            Integer num2 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, o0.a, null);
            List list7 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, (DeserializationStrategy) lazyArr[11].getValue(), null);
            str = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, v1Var, null);
            List list8 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, (DeserializationStrategy) lazyArr[13].getValue(), null);
            String str18 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, v1Var, null);
            String str19 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 15, v1Var, null);
            String str20 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 16, v1Var, null);
            String str21 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 17, v1Var, null);
            i5 = 524287;
            structurableText = (StructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 18, StructurableTextSerializer.INSTANCE, null);
            str9 = str18;
            str7 = str15;
            str6 = str14;
            list2 = list6;
            bool2 = bool8;
            str8 = str16;
            str5 = str17;
            bool = bool7;
            bool4 = bool6;
            bool3 = bool5;
            str2 = str21;
            str4 = str20;
            str3 = str19;
            list3 = list8;
            embedDisplayType = embedDisplayType2;
            list = list7;
            num = num2;
        } else {
            List list9 = null;
            String str22 = null;
            Boolean bool9 = null;
            String str23 = null;
            String str24 = null;
            String str25 = null;
            List list10 = null;
            Integer num3 = null;
            String str26 = null;
            str = null;
            EmbedDisplayType embedDisplayType3 = null;
            Boolean bool10 = null;
            String str27 = null;
            Boolean bool11 = null;
            String str28 = null;
            List list11 = null;
            int i10 = 5;
            int i11 = 0;
            int i12 = 1;
            Boolean bool12 = null;
            String str29 = null;
            StructurableText structurableText2 = null;
            i5 = 0;
            while (i12 != 0) {
                String str30 = str23;
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        str11 = str22;
                        i12 = i11;
                        str23 = str30;
                        list9 = list9;
                        i10 = 5;
                        i11 = i12;
                        str22 = str11;
                    case 0:
                        List list12 = list9;
                        str11 = str22;
                        DeserializationStrategy deserializationStrategy = (DeserializationStrategy) lazyArr[i11].getValue();
                        int i13 = i11;
                        embedDisplayType3 = (EmbedDisplayType) beginStructure.decodeSerializableElement(serialDescriptor, i13, deserializationStrategy, embedDisplayType3);
                        i5 |= 1;
                        bool10 = bool10;
                        str23 = str30;
                        list9 = list12;
                        i10 = 5;
                        i11 = i13;
                        str22 = str11;
                    case 1:
                        list4 = list9;
                        str12 = str22;
                        str13 = str30;
                        bool10 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, g.a, bool10);
                        i5 |= 2;
                        str27 = str27;
                        str23 = str13;
                        str22 = str12;
                        list9 = list4;
                        i10 = 5;
                    case 2:
                        list4 = list9;
                        str12 = str22;
                        str13 = str30;
                        str27 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str27);
                        i5 |= 4;
                        bool11 = bool11;
                        str23 = str13;
                        str22 = str12;
                        list9 = list4;
                        i10 = 5;
                    case 3:
                        list4 = list9;
                        str12 = str22;
                        str13 = str30;
                        bool11 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, g.a, bool11);
                        i5 |= 8;
                        str28 = str28;
                        str23 = str13;
                        str22 = str12;
                        list9 = list4;
                        i10 = 5;
                    case 4:
                        list4 = list9;
                        str12 = str22;
                        str13 = str30;
                        str28 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str28);
                        i5 |= 16;
                        list11 = list11;
                        str23 = str13;
                        str22 = str12;
                        list9 = list4;
                        i10 = 5;
                    case 5:
                        list5 = list9;
                        String str31 = str22;
                        int i14 = i10;
                        list11 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, i14, (DeserializationStrategy) lazyArr[i10].getValue(), list11);
                        i5 |= 32;
                        str23 = str30;
                        str22 = str31;
                        i10 = i14;
                        list9 = list5;
                    case 6:
                        list5 = list9;
                        str23 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1.a, str30);
                        i5 |= 64;
                        str22 = str22;
                        list9 = list5;
                    case 7:
                        str26 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1.a, str26);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        list9 = list9;
                        str23 = str30;
                    case 8:
                        str10 = str26;
                        bool9 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, g.a, bool9);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        str23 = str30;
                        str26 = str10;
                    case 9:
                        str10 = str26;
                        bool12 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, g.a, bool12);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        str23 = str30;
                        str26 = str10;
                    case 10:
                        str10 = str26;
                        num3 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, o0.a, num3);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        str23 = str30;
                        str26 = str10;
                    case 11:
                        str10 = str26;
                        list10 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, (DeserializationStrategy) lazyArr[11].getValue(), list10);
                        i5 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                        str23 = str30;
                        str26 = str10;
                    case 12:
                        str10 = str26;
                        str = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, v1.a, str);
                        i5 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                        str23 = str30;
                        str26 = str10;
                    case 13:
                        str10 = str26;
                        list9 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, (DeserializationStrategy) lazyArr[13].getValue(), list9);
                        i5 |= 8192;
                        str23 = str30;
                        str26 = str10;
                    case 14:
                        str10 = str26;
                        str22 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, v1.a, str22);
                        i5 |= 16384;
                        str23 = str30;
                        str26 = str10;
                    case 15:
                        str10 = str26;
                        str24 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 15, v1.a, str24);
                        i6 = PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS;
                        i5 |= i6;
                        str23 = str30;
                        str26 = str10;
                    case 16:
                        str10 = str26;
                        str25 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 16, v1.a, str25);
                        i6 = KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT;
                        i5 |= i6;
                        str23 = str30;
                        str26 = str10;
                    case 17:
                        str10 = str26;
                        str29 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 17, v1.a, str29);
                        i6 = KeyCommandDescriptor.ModifierFlags.SHIFT;
                        i5 |= i6;
                        str23 = str30;
                        str26 = str10;
                    case 18:
                        str10 = str26;
                        structurableText2 = (StructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 18, StructurableTextSerializer.INSTANCE, structurableText2);
                        i6 = KeyCommandDescriptor.ModifierFlags.CONTROL;
                        i5 |= i6;
                        str23 = str30;
                        str26 = str10;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            embedDisplayType = embedDisplayType3;
            bool = bool9;
            bool2 = bool12;
            str2 = str29;
            str3 = str24;
            str4 = str25;
            list = list10;
            num = num3;
            str5 = str26;
            structurableText = structurableText2;
            bool3 = bool10;
            str6 = str27;
            bool4 = bool11;
            str7 = str28;
            list2 = list11;
            str8 = str23;
            str9 = str22;
            list3 = list9;
        }
        int i15 = i5;
        String str32 = str;
        beginStructure.endStructure(serialDescriptor);
        return new ActivityRichPresenceInviteEmbed(i15, embedDisplayType, bool3, str6, bool4, str7, list2, str8, str5, bool, bool2, num, list, str32, list3, str9, str3, str4, str2, structurableText, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ActivityRichPresenceInviteEmbed value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ActivityRichPresenceInviteEmbed.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
