package com.discord.media.utils;

import android.content.ContentResolver;
import android.net.Uri;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Landroid/net/Uri;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.media.utils.MediaResolver$resolveToUri$2", f = "MediaResolver.kt", l = {64, 67, 70, 71}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaResolver$resolveToUri$2 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ boolean $allowOptimization;
    final /* synthetic */ EncodingConfig $encodingConfig;
    final /* synthetic */ int $imageCompressionQuality;
    final /* synthetic */ Uri $inputUri;
    final /* synthetic */ boolean $isLowQuality;
    final /* synthetic */ boolean $skipVideoTranscode;
    final /* synthetic */ boolean $useOriginalIfSmaller;
    int label;
    final /* synthetic */ MediaResolver this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaResolver$resolveToUri$2(MediaResolver mediaResolver, Uri uri, boolean z5, EncodingConfig encodingConfig, int i5, boolean z6, boolean z7, boolean z8, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaResolver;
        this.$inputUri = uri;
        this.$skipVideoTranscode = z5;
        this.$encodingConfig = encodingConfig;
        this.$imageCompressionQuality = i5;
        this.$isLowQuality = z6;
        this.$useOriginalIfSmaller = z7;
        this.$allowOptimization = z8;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaResolver$resolveToUri$2(this.this$0, this.$inputUri, this.$skipVideoTranscode, this.$encodingConfig, this.$imageCompressionQuality, this.$isLowQuality, this.$useOriginalIfSmaller, this.$allowOptimization, continuation);
    }

    /* JADX WARN: Code restructure failed: missing block: B:23:0x0058, code lost:
    
        if (r12 == r0) goto L33;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x0080, code lost:
    
        if (r12 == r0) goto L33;
     */
    /* JADX WARN: Code restructure failed: missing block: B:30:0x0095, code lost:
    
        if (r12 == r0) goto L33;
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x0037, code lost:
    
        if (r12 == r0) goto L33;
     */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Object checkFreeSpace;
        ContentResolver resolver;
        ContentResolver resolver2;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            MediaResolver mediaResolver = this.this$0;
            this.label = 1;
            checkFreeSpace = mediaResolver.checkFreeSpace(this);
        } else {
            if (i5 != 1) {
                if (i5 == 2) {
                    b.R(obj);
                    return (Uri) obj;
                }
                if (i5 == 3) {
                    b.R(obj);
                    return (Uri) obj;
                }
                if (i5 != 4) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                b.R(obj);
                return (Uri) obj;
            }
            b.R(obj);
        }
        ContentResolverUtils contentResolverUtils = ContentResolverUtils.INSTANCE;
        resolver = this.this$0.getResolver();
        if (contentResolverUtils.isVideo(resolver, this.$inputUri)) {
            MediaResolver mediaResolver2 = this.this$0;
            Uri uri = this.$inputUri;
            boolean z5 = this.$skipVideoTranscode;
            EncodingConfig encodingConfig = this.$encodingConfig;
            this.label = 2;
            obj = mediaResolver2.handleVideo(uri, z5, encodingConfig, this);
        } else {
            resolver2 = this.this$0.getResolver();
            if (contentResolverUtils.isImage(resolver2, this.$inputUri)) {
                MediaResolver mediaResolver3 = this.this$0;
                Uri uri2 = this.$inputUri;
                int i6 = this.$imageCompressionQuality;
                boolean z6 = this.$isLowQuality;
                boolean z7 = this.$useOriginalIfSmaller;
                boolean z8 = this.$allowOptimization;
                this.label = 3;
                obj = mediaResolver3.handleImage(uri2, i6, z6, z7, z8, this);
            } else {
                MediaResolver mediaResolver4 = this.this$0;
                Uri uri3 = this.$inputUri;
                this.label = 4;
                obj = MediaResolver.copyToFile$default(mediaResolver4, uri3, null, this, 2, null);
            }
        }
        return aVar;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaResolver$resolveToUri$2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
