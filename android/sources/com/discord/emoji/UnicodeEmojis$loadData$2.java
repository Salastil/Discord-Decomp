package com.discord.emoji;

import android.content.Context;
import com.discord.emoji.UnicodeEmojis;
import com.facebook.imagepipeline.nativecode.c;
import ds.s;
import java.io.InputStream;
import java.util.zip.GZIPInputStream;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.json.Json;
import lo.d;
import lo.h;
import ve.i;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/discord/emoji/UnicodeEmojis$EmojiCategories;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.emoji.UnicodeEmojis$loadData$2", f = "UnicodeEmojis.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nUnicodeEmojis.kt\nKotlin\n*S Kotlin\n*F\n+ 1 UnicodeEmojis.kt\ncom/discord/emoji/UnicodeEmojis$loadData$2\n+ 2 JvmStreams.kt\nkotlinx/serialization/json/JvmStreamsKt\n*L\n1#1,68:1\n80#2:69\n*S KotlinDebug\n*F\n+ 1 UnicodeEmojis.kt\ncom/discord/emoji/UnicodeEmojis$loadData$2\n*L\n34#1:69\n*E\n"})
/* loaded from: classes.dex */
public final class UnicodeEmojis$loadData$2 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Context $context;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public UnicodeEmojis$loadData$2(Context context, Continuation continuation) {
        super(2, continuation);
        this.$context = context;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new UnicodeEmojis$loadData$2(this.$context, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Json json;
        a aVar = a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        InputStream openRawResource = this.$context.getResources().openRawResource(R.raw.emojis_json);
        try {
            GZIPInputStream stream = new GZIPInputStream(openRawResource);
            try {
                json = UnicodeEmojis.emojiJsonParser;
                json.getClass();
                KSerializer deserializer = UnicodeEmojis.EmojiCategories.INSTANCE.serializer();
                Intrinsics.checkNotNullParameter(json, "<this>");
                Intrinsics.checkNotNullParameter(deserializer, "deserializer");
                Intrinsics.checkNotNullParameter(stream, "stream");
                i iVar = new i(stream);
                try {
                    Object j = s.j(json, deserializer, iVar);
                    iVar.j();
                    UnicodeEmojis.EmojiCategories emojiCategories = (UnicodeEmojis.EmojiCategories) j;
                    stream.close();
                    c.j(openRawResource, null);
                    return emojiCategories;
                } catch (Throwable th2) {
                    iVar.j();
                    throw th2;
                }
            } finally {
            }
        } finally {
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((UnicodeEmojis$loadData$2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
