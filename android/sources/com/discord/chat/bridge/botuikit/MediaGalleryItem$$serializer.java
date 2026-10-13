package com.discord.chat.bridge.botuikit;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.discord.chat.bridge.botuikit.MediaGalleryItemType;
import com.discord.chat.bridge.media.UnfurledMediaItem;
import com.discord.chat.bridge.media.UnfurledMediaItem$$serializer;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import ds.r;
import fo.d;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import nf.e;
import org.jetbrains.annotations.NotNull;
import org.webrtc.PeerConnection;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/botuikit/MediaGalleryItem.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/botuikit/MediaGalleryItem;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/botuikit/MediaGalleryItem;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/botuikit/MediaGalleryItem;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MediaGalleryItem$$serializer implements h0 {

    @NotNull
    public static final MediaGalleryItem$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        MediaGalleryItem$$serializer mediaGalleryItem$$serializer = new MediaGalleryItem$$serializer();
        INSTANCE = mediaGalleryItem$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.botuikit.MediaGalleryItem", mediaGalleryItem$$serializer, 18);
        j1Var.k("media", false);
        j1Var.k("mediaType", false);
        j1Var.k("videoPreviewUrl", true);
        j1Var.k("isSpoiler", false);
        j1Var.k("spoilerDescription", false);
        j1Var.k("isObscure", false);
        j1Var.k("isObscureAwaitingScan", false);
        j1Var.k("obscureDescription", false);
        j1Var.k("obscureHideControls", false);
        j1Var.k("obscureIsOpaque", false);
        j1Var.k("verifyAge", false);
        j1Var.k("showDescription", false);
        j1Var.k("description", true);
        j1Var.k("descriptionHint", false);
        j1Var.k(ViewProps.ACCESSIBILITY_ROLE, false);
        j1Var.k("portalId", false);
        j1Var.k("spoilerOrNull", true);
        j1Var.k("obscureOrNull", true);
        descriptor = j1Var;
    }

    private MediaGalleryItem$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        KSerializer o6 = e.o(v1Var);
        g gVar = g.a;
        return new KSerializer[]{UnfurledMediaItem$$serializer.INSTANCE, MediaGalleryItemType.Serializer.INSTANCE, o6, gVar, e.o(v1Var), gVar, gVar, e.o(v1Var), gVar, gVar, e.o(gVar), gVar, e.o(v1Var), v1Var, v1Var, e.o(v1Var), e.o(v1Var), e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final MediaGalleryItem deserialize(@NotNull Decoder decoder) {
        String str;
        String str2;
        String str3;
        boolean z5;
        MediaGalleryItemType mediaGalleryItemType;
        int i5;
        UnfurledMediaItem unfurledMediaItem;
        String str4;
        String str5;
        String str6;
        String str7;
        Boolean bool;
        String str8;
        String str9;
        boolean z6;
        boolean z7;
        boolean z8;
        boolean z10;
        boolean z11;
        int i6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        char c6 = '\n';
        if (beginStructure.decodeSequentially()) {
            UnfurledMediaItem unfurledMediaItem2 = (UnfurledMediaItem) beginStructure.decodeSerializableElement(serialDescriptor, 0, UnfurledMediaItem$$serializer.INSTANCE, null);
            MediaGalleryItemType mediaGalleryItemType2 = (MediaGalleryItemType) beginStructure.decodeSerializableElement(serialDescriptor, 1, MediaGalleryItemType.Serializer.INSTANCE, null);
            v1 v1Var = v1.a;
            String str10 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1Var, null);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 3);
            String str11 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            boolean decodeBooleanElement2 = beginStructure.decodeBooleanElement(serialDescriptor, 5);
            boolean decodeBooleanElement3 = beginStructure.decodeBooleanElement(serialDescriptor, 6);
            String str12 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1Var, null);
            boolean decodeBooleanElement4 = beginStructure.decodeBooleanElement(serialDescriptor, 8);
            boolean decodeBooleanElement5 = beginStructure.decodeBooleanElement(serialDescriptor, 9);
            Boolean bool2 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, g.a, null);
            boolean decodeBooleanElement6 = beginStructure.decodeBooleanElement(serialDescriptor, 11);
            String str13 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, v1Var, null);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 13);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 14);
            String str14 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 15, v1Var, null);
            String str15 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 16, v1Var, null);
            str2 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 17, v1Var, null);
            z5 = decodeBooleanElement4;
            str = str10;
            i5 = 262143;
            str8 = decodeStringElement;
            bool = bool2;
            z6 = decodeBooleanElement6;
            z7 = decodeBooleanElement5;
            str7 = str12;
            z8 = decodeBooleanElement3;
            z10 = decodeBooleanElement2;
            z11 = decodeBooleanElement;
            str3 = str11;
            str4 = str15;
            mediaGalleryItemType = mediaGalleryItemType2;
            str9 = decodeStringElement2;
            str6 = str13;
            str5 = str14;
            unfurledMediaItem = unfurledMediaItem2;
        } else {
            boolean z12 = true;
            String str16 = null;
            String str17 = null;
            String str18 = null;
            UnfurledMediaItem unfurledMediaItem3 = null;
            String str19 = null;
            String str20 = null;
            String str21 = null;
            String str22 = null;
            Boolean bool3 = null;
            String str23 = null;
            String str24 = null;
            int i10 = 0;
            boolean z13 = false;
            boolean z14 = false;
            boolean z15 = false;
            boolean z16 = false;
            boolean z17 = false;
            MediaGalleryItemType mediaGalleryItemType3 = null;
            boolean z18 = false;
            while (z12) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z12 = false;
                    case 0:
                        unfurledMediaItem3 = (UnfurledMediaItem) beginStructure.decodeSerializableElement(serialDescriptor, 0, UnfurledMediaItem$$serializer.INSTANCE, unfurledMediaItem3);
                        i10 |= 1;
                        c6 = '\n';
                    case 1:
                        mediaGalleryItemType3 = (MediaGalleryItemType) beginStructure.decodeSerializableElement(serialDescriptor, 1, MediaGalleryItemType.Serializer.INSTANCE, mediaGalleryItemType3);
                        i10 |= 2;
                        c6 = '\n';
                    case 2:
                        str16 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str16);
                        i10 |= 4;
                        c6 = '\n';
                    case 3:
                        z17 = beginStructure.decodeBooleanElement(serialDescriptor, 3);
                        i10 |= 8;
                        c6 = '\n';
                    case 4:
                        str18 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str18);
                        i10 |= 16;
                        c6 = '\n';
                    case 5:
                        z16 = beginStructure.decodeBooleanElement(serialDescriptor, 5);
                        i10 |= 32;
                        c6 = '\n';
                    case 6:
                        z15 = beginStructure.decodeBooleanElement(serialDescriptor, 6);
                        i10 |= 64;
                        c6 = '\n';
                    case 7:
                        str22 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1.a, str22);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        c6 = '\n';
                    case 8:
                        boolean decodeBooleanElement7 = beginStructure.decodeBooleanElement(serialDescriptor, 8);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        c6 = c6;
                        z18 = decodeBooleanElement7;
                    case 9:
                        z14 = beginStructure.decodeBooleanElement(serialDescriptor, 9);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        c6 = c6;
                    case 10:
                        bool3 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, g.a, bool3);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        c6 = '\n';
                    case 11:
                        z13 = beginStructure.decodeBooleanElement(serialDescriptor, 11);
                        i10 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                        c6 = '\n';
                    case 12:
                        str21 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, v1.a, str21);
                        i10 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                        c6 = '\n';
                    case 13:
                        str23 = beginStructure.decodeStringElement(serialDescriptor, 13);
                        i10 |= 8192;
                        c6 = '\n';
                    case 14:
                        str24 = beginStructure.decodeStringElement(serialDescriptor, 14);
                        i10 |= 16384;
                        c6 = '\n';
                    case 15:
                        str20 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 15, v1.a, str20);
                        i6 = PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS;
                        i10 |= i6;
                        c6 = '\n';
                    case 16:
                        str19 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 16, v1.a, str19);
                        i6 = KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT;
                        i10 |= i6;
                        c6 = '\n';
                    case 17:
                        str17 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 17, v1.a, str17);
                        i6 = KeyCommandDescriptor.ModifierFlags.SHIFT;
                        i10 |= i6;
                        c6 = '\n';
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            str = str16;
            str2 = str17;
            str3 = str18;
            z5 = z18;
            mediaGalleryItemType = mediaGalleryItemType3;
            i5 = i10;
            unfurledMediaItem = unfurledMediaItem3;
            str4 = str19;
            str5 = str20;
            str6 = str21;
            str7 = str22;
            bool = bool3;
            str8 = str23;
            str9 = str24;
            z6 = z13;
            z7 = z14;
            z8 = z15;
            z10 = z16;
            z11 = z17;
        }
        beginStructure.endStructure(serialDescriptor);
        return new MediaGalleryItem(i5, unfurledMediaItem, mediaGalleryItemType, str, z11, str3, z10, z8, str7, z5, z7, bool, z6, str6, str8, str9, str5, str4, str2, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull MediaGalleryItem value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        MediaGalleryItem.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
