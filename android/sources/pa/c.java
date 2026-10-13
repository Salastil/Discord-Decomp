package pa;

import com.facebook.imagepipeline.listener.RequestListener;
import com.facebook.imagepipeline.request.ImageRequest;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;

/* loaded from: classes3.dex */
public final class c implements RequestListener {
    public final ArrayList a;

    public c(Set set) {
        this.a = new ArrayList(set.size());
        Iterator it = set.iterator();
        while (it.hasNext()) {
            RequestListener requestListener = (RequestListener) it.next();
            if (requestListener != null) {
                this.a.add(requestListener);
            }
        }
    }

    public static void a(String str, Exception exc) {
        p8.a.h("ForwardingRequestListener", str, exc);
    }

    @Override // com.facebook.imagepipeline.listener.RequestListener
    public final void onProducerEvent(String str, String str2, String str3) {
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ((RequestListener) arrayList.get(i5)).onProducerEvent(str, "NetworkFetchProducer", "intermediate_result");
            } catch (Exception e9) {
                a("InternalListener exception in onIntermediateChunkStart", e9);
            }
        }
    }

    @Override // com.facebook.imagepipeline.listener.RequestListener
    public final void onProducerFinishWithCancellation(String str, String str2, Map map) {
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ((RequestListener) arrayList.get(i5)).onProducerFinishWithCancellation(str, str2, null);
            } catch (Exception e9) {
                a("InternalListener exception in onProducerFinishWithCancellation", e9);
            }
        }
    }

    @Override // com.facebook.imagepipeline.listener.RequestListener
    public final void onProducerFinishWithFailure(String str, String str2, Throwable th2, Map map) {
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ((RequestListener) arrayList.get(i5)).onProducerFinishWithFailure(str, str2, th2, map);
            } catch (Exception e9) {
                a("InternalListener exception in onProducerFinishWithFailure", e9);
            }
        }
    }

    @Override // com.facebook.imagepipeline.listener.RequestListener
    public final void onProducerFinishWithSuccess(String str, String str2, Map map) {
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ((RequestListener) arrayList.get(i5)).onProducerFinishWithSuccess(str, str2, map);
            } catch (Exception e9) {
                a("InternalListener exception in onProducerFinishWithSuccess", e9);
            }
        }
    }

    @Override // com.facebook.imagepipeline.listener.RequestListener
    public final void onProducerStart(String str, String str2) {
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ((RequestListener) arrayList.get(i5)).onProducerStart(str, str2);
            } catch (Exception e9) {
                a("InternalListener exception in onProducerStart", e9);
            }
        }
    }

    @Override // com.facebook.imagepipeline.listener.RequestListener
    public final void onRequestCancellation(String str) {
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ((RequestListener) arrayList.get(i5)).onRequestCancellation(str);
            } catch (Exception e9) {
                a("InternalListener exception in onRequestCancellation", e9);
            }
        }
    }

    @Override // com.facebook.imagepipeline.listener.RequestListener
    public final void onRequestFailure(ImageRequest imageRequest, String str, Throwable th2, boolean z5) {
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ((RequestListener) arrayList.get(i5)).onRequestFailure(imageRequest, str, th2, z5);
            } catch (Exception e9) {
                a("InternalListener exception in onRequestFailure", e9);
            }
        }
    }

    @Override // com.facebook.imagepipeline.listener.RequestListener
    public final void onRequestStart(ImageRequest imageRequest, Object obj, String str, boolean z5) {
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ((RequestListener) arrayList.get(i5)).onRequestStart(imageRequest, obj, str, z5);
            } catch (Exception e9) {
                a("InternalListener exception in onRequestStart", e9);
            }
        }
    }

    @Override // com.facebook.imagepipeline.listener.RequestListener
    public final void onRequestSuccess(ImageRequest imageRequest, String str, boolean z5) {
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ((RequestListener) arrayList.get(i5)).onRequestSuccess(imageRequest, str, z5);
            } catch (Exception e9) {
                a("InternalListener exception in onRequestSuccess", e9);
            }
        }
    }

    @Override // com.facebook.imagepipeline.listener.RequestListener
    public final void onUltimateProducerReached(String str, String str2, boolean z5) {
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ((RequestListener) arrayList.get(i5)).onUltimateProducerReached(str, str2, z5);
            } catch (Exception e9) {
                a("InternalListener exception in onProducerFinishWithSuccess", e9);
            }
        }
    }

    @Override // com.facebook.imagepipeline.listener.RequestListener
    public final boolean requiresExtraMap(String str) {
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            if (((RequestListener) arrayList.get(i5)).requiresExtraMap(str)) {
                return true;
            }
        }
        return false;
    }

    public c(RequestListener... requestListenerArr) {
        this.a = new ArrayList(requestListenerArr.length);
        for (RequestListener requestListener : requestListenerArr) {
            if (requestListener != null) {
                this.a.add(requestListener);
            }
        }
    }
}
