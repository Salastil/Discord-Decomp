package com.discord.chat.input.views;

import android.content.Context;
import android.graphics.Bitmap;
import androidx.collection.LruCache;
import com.discord.image.fresco.FrescoFetchDecodedImageKt;
import com.discord.image.fresco.postprocessors.PostProcessor;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.h;
import nr.g0;
import sr.q;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.chat.input.views.ChatInputLeadingIconLoader$load$1", f = "ChatInputLeadingIconLoader.kt", l = {48, ChatViewRecyclerTypes.GUILD_PROFILE_INVITE}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class ChatInputLeadingIconLoader$load$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Function1<Bitmap, Unit> $onLoaded;
    final /* synthetic */ String $url;
    int label;
    final /* synthetic */ ChatInputLeadingIconLoader this$0;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @lo.d(c = "com.discord.chat.input.views.ChatInputLeadingIconLoader$load$1$1", f = "ChatInputLeadingIconLoader.kt", l = {}, m = "invokeSuspend")
    /* renamed from: com.discord.chat.input.views.ChatInputLeadingIconLoader$load$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
        final /* synthetic */ Bitmap $bitmap;
        final /* synthetic */ Function1<Bitmap, Unit> $onLoaded;
        final /* synthetic */ String $url;
        int label;
        final /* synthetic */ ChatInputLeadingIconLoader this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        public AnonymousClass1(ChatInputLeadingIconLoader chatInputLeadingIconLoader, String str, Bitmap bitmap, Function1<? super Bitmap, Unit> function1, Continuation continuation) {
            super(2, continuation);
            this.this$0 = chatInputLeadingIconLoader;
            this.$url = str;
            this.$bitmap = bitmap;
            this.$onLoaded = function1;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass1(this.this$0, this.$url, this.$bitmap, this.$onLoaded, continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            LruCache lruCache;
            ko.a aVar = ko.a.f13464d;
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
            lruCache = this.this$0.cache;
            lruCache.b(this.$url, this.$bitmap);
            this.$onLoaded.invoke(this.$bitmap);
            return Unit.a;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public ChatInputLeadingIconLoader$load$1(ChatInputLeadingIconLoader chatInputLeadingIconLoader, String str, Function1<? super Bitmap, Unit> function1, Continuation continuation) {
        super(2, continuation);
        this.this$0 = chatInputLeadingIconLoader;
        this.$url = str;
        this.$onLoaded = function1;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ChatInputLeadingIconLoader$load$1(this.this$0, this.$url, this.$onLoaded, continuation);
    }

    /* JADX WARN: Code restructure failed: missing block: B:20:0x006d, code lost:
    
        if (nr.x.A(r1, r9, r15) == r0) goto L25;
     */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Set set;
        Context context;
        Object fetchDecodedImage$default;
        Set set2;
        Set set3;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        try {
            if (i5 == 0) {
                ki.b.R(obj);
                context = this.this$0.context;
                String str = this.$url;
                this.label = 1;
                fetchDecodedImage$default = FrescoFetchDecodedImageKt.fetchDecodedImage$default(context, str, (PostProcessor) null, true, (Continuation) this, 2, (Object) null);
                if (fetchDecodedImage$default == aVar) {
                    return aVar;
                }
            } else {
                if (i5 != 1) {
                    if (i5 != 2) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                    set3 = this.this$0.inFlightUrls;
                    set3.remove(this.$url);
                    return Unit.a;
                }
                ki.b.R(obj);
                fetchDecodedImage$default = obj;
            }
            Bitmap bitmap = (Bitmap) fetchDecodedImage$default;
            if (bitmap == null) {
                set2 = this.this$0.failedUrls;
                set2.add(this.$url);
                return Unit.a;
            }
            ur.e eVar = g0.a;
            or.d dVar = q.a;
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.this$0, this.$url, bitmap, this.$onLoaded, null);
            this.label = 2;
        } finally {
            set = this.this$0.inFlightUrls;
            set.remove(this.$url);
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ChatInputLeadingIconLoader$load$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
